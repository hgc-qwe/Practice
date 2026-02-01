#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr && curr->next) {
            ListNode* first = curr;
            ListNode* second = curr->next;
            ListNode* temp = second->next;

            prev->next = second;
            second->next = first;
            first->next = temp;

            prev = first;
            curr = temp;
        }

        ListNode* res = dummy->next;
        delete dummy;
        return res;
    }
};