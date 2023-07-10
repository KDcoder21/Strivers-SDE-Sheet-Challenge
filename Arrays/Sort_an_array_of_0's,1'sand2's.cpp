class Solution
{
    public:
    void sortColors(vector<int> &arr)
    {
        int n = arr.size();
        int count1=0;
        int count2=0;
        int count3=0;
      for(int i=0;i<n;i++)
      {
          if(arr[i]==0)
          {
              count1++;
          }
          if(arr[i]==1)
          {
              count2++;
          }
          if(arr[i]==2)
          {
              count3++;
          }
    }
    for(int i=0;i<count1;i++){
              arr[i]=0;
          }
          for(int i=count1;i<count1+count2;i++){
              arr[i]=1;
          }
          for(int i=count1+count2;i<n;i++){
             arr[i]=2;
          }
    }
};