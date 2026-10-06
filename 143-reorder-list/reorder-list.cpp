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
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        vector<int> arr;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int i=0 , j=arr.size()-1;
        ListNode* temp1 = head;
        while(i <= j){
            temp1->val = arr[i++] , temp1 = temp1->next;
            if(i <= j) temp1->val = arr[j--] , temp1 = temp1->next;
        }
    }
};