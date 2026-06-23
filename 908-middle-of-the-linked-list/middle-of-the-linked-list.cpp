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
    ListNode* middleNode(ListNode* head) {
        // int size=0;
        // ListNode* temp=head;
        // while(temp!=nullptr){
        //     size++;
        //     temp=temp->next;
        // }
        // int b=size/2;
        // ListNode* mid=head;
        // for(int i=1;i<=b;i++){
        //     mid=mid->next;
        // }
       ListNode* s=head;
       ListNode* f=head;
       while(f!= nullptr && f->next !=nullptr){
        s=s->next;
        f=f->next->next;
       }
            return s;
        }
};