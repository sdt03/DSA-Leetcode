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
    ListNode* reverseLL(ListNode* head){
        ListNode* p = head;
        ListNode* q = NULL;
        ListNode* r = NULL;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }

    ListNode* findKthNode(ListNode* temp, int k){
        k -= 1;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = NULL;

        while(temp!=NULL){
            ListNode* KthNode = findKthNode(temp, k);
            if(KthNode==NULL){
                if(prevNode) prevNode->next=temp;
                break;
            }

            ListNode* newNode = KthNode->next;
            KthNode->next = NULL;
            reverseLL(temp);
            if(temp==head){
                head = KthNode;
            }
            else{
                prevNode->next=KthNode;
            }
            prevNode = temp;
            temp = newNode;
        }
        return head;
    }
};