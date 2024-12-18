/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *third=NULL;
    struct ListNode *last;
    if(list1==NULL&&list2==NULL){
        return NULL;
    }
    if(list2==NULL){
        return list1;
    }
    else if(list1==NULL){
        return list2;
    }
    if(list1->val<list2->val){
        third=last=list1;
        list1=list1->next;
        third->next=NULL;
    }
    else{
        third=last=list2;
        list2=list2->next;
        third->next=NULL;
    }
    while(list1&&list2){
        if(list1->val<list2->val){
            last->next=list1;
            last=list1;
            list1=list1->next;
            last->next=NULL;
        }
        else{
            last->next=list2;
            last=list2;
            list2=list2->next;
            last->next=NULL;
        }
    }
    if(list1)last->next=list1;
    if(list2)last->next=list2;
    return third;
}