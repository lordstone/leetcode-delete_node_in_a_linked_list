/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node == NULL) return;
        if(node->next == NULL){
            delete node;
            return;
        }
        ListNode* cur = node;
        ListNode* ptr = node->next;
        while(ptr->next != NULL){
            cur->val = ptr->val;
            cur = cur->next;
            ptr = ptr->next;
        }//end while
        cur->val = ptr->val;
        cur->next = NULL;
        delete ptr;
    }
};
