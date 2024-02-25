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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL){
            return l2;
        }
        else if(l2 == NULL){
            return l1;
        }
        ListNode* result = new ListNode(0);
        ListNode* currNode = result;
        int carryNum = 0;
        int value = 0;
        while(l1 != NULL || l2 != NULL || carryNum != 0){
            value = ((l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carryNum) % 10;
            carryNum = ((l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carryNum) / 10;
            currNode->next = new ListNode(value);
            currNode = currNode->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return result->next;
    }
};