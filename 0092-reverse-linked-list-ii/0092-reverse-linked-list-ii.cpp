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
        if (head == NULL || left == right) return head;
        
        // Use a dummy node to seamlessly handle left = 1
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* t = head;
        ListNode* before = dummy; // Starts at dummy instead of NULL
        int pos = 1;
        
        // Step 1: Advance to the 'left' position
        while (pos < left) {
            before = t;
            t = t->next;
            pos++;
        }
        
        // Step 2: Reverse the sub-list
        ListNode* curr = t;
        ListNode* prev = NULL;
        int times = right - left + 1;
        
        while (times--) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        // Step 3: Stitch the reversed sub-list back into the main list
        before->next = prev; // Connects node before 'left' to the new head of sub-list
        t->next = curr;      // Connects the original 'left' node (now tail) to the node after 'right'
        
        // Step 4: Return the actual head
        ListNode* newHead = dummy->next;
        delete dummy; // Clean up memory
        return newHead;
    }
};