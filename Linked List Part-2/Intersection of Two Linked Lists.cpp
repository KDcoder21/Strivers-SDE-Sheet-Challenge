/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


 int getcount(ListNode* head){
    int c = 0;
    while(head){
        c++;head=head->next;
    }
    return c;
}

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {



    ListNode* t1 = head1,* t2 = head2,* curr1 = head1,* curr2 = head2;
    int c1 = getcount(t1),c2= getcount(t2),d;
    if(c1>c2){
        d = c1-c2;
        for(int i=0;i<d;i++){
            curr1 = curr1->next;
        }
        while(curr1 and curr2){
            if(curr1 == curr2) return curr1;
            curr1 = curr1->next;curr2 = curr2->next;
        }
    }
    else{
        d = c2-c1;
        for(int i=0;i<d;i++){
            head2 = head2->next;
        }
        while(head1 and head2){
            if(head1 == head2) return head1;
            head1 = head1->next;head2 = head2->next;
        }
    }
    return NULL;
    }
};