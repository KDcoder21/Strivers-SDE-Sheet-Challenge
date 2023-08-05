//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution

{

    

        

    static bool comp (Item &a,Item &b)

    {

        double c1 = (double) a.value/a.weight;

        double c2 = (double) b.value/b.weight;

        

        if(c1>c2) return true;

        return false;

    }

    public:

    //Function to get the maximum total value in the knapsack.

 

    

    

    double fractionalKnapsack(int W, Item arr[], int n)

    {

        // Your code here

        double profit=0.0;

        sort(arr,arr+n,comp);

        

        for(int i=0;i<n;i++)

        {

            int itemWeight = arr[i].weight;

            int itemValue = arr[i].value;

            if(itemWeight<=W)

            {

                profit += itemValue;

                W-=itemWeight;

            }

            else {

                profit+= itemValue * (double)W/itemWeight;

                break;

            }

        }

        return profit;

    }
};