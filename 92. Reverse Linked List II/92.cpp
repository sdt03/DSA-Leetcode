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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL) return nullptr;
        if(head->next==NULL) return head;

        ListNode* rev = new ListNode(0);
        rev->next=head;
        ListNode* p = rev;

        for(int i=0; i<left-1;i++) p=p->next;
        ListNode* q=p->next;

        for(int i=0;i<right-left;i++){
            ListNode* r=q->next;
            q->next=r->next;
            r->next=p->next;
            p->next=r;
        }
        return rev->next;
    }
};