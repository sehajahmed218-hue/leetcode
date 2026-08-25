/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *prev=head, *nxt=head, *temp=head;
        int counter=1;
        while(prev)
        {
            prev=prev->next;
            counter++;
        }
        int n=counter;
        counter=1;
        prev=head;
        while(temp)
        {
            if(counter==k) prev=temp;
            if(counter==n-k) nxt=temp;
            temp=temp->next;
            counter++;
        }
        swap(prev->val,nxt->val);
        return head;
    }
};