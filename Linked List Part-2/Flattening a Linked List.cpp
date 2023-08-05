/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    Node* merge(Node* h1,Node* h2){
        if(!h1) return h2;
        if(!h2) return h1;
        Node* h3;
        
        if(h1->data<=h2->data){
            h3 = h1;
            h3->bottom = merge(h1->bottom,h2);
        }
        else{
            h3 = h2;
            h3->bottom = merge(h1,h2->bottom); //merged is all stored in h3 ka bottom
        }
        return h3;
    }
Node *flatten(Node *root)
{
   // Your code here
   Node* r1 = root;
   Node* r2 = root->next;
   while(r2){
       r1 = merge(r1,r2);r2 = r2->next;
   }
   return r1;
   
}
