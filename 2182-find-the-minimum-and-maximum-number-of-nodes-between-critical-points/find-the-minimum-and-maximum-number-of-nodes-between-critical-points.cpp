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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head || !head->next || !head->next->next)    return {-1,-1};
        int first=-1,maxd=0,mind=INT_MAX,index=1,last=-1;
        while(head->next && head->next->next)
        {
            if(head->next->val>head->val && head->next->val>head->next->next->val)
            {
                if(first==-1)   first = index;
                else
                    mind=min(mind,index-last);
                last=index;
            }
            if(head->next->val<head->val && head->next->val<head->next->next->val)
            {
                if(first==-1)   first = index;
                else
                    mind=min(mind,index-last);
                last=index;
            }
            index++;
            head=head->next;
        }
        if(first == last || first ==-1)
        {
            return {-1,-1};
        }
        maxd=max(maxd,last-first);
        return {mind,maxd};
    }
};