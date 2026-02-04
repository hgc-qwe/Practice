#include <iostream>
#include <stack>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> next;
        stack<int> st;

        for (int i = nums2.size() - 1; i >= 0; i--) {
            int num = nums2[i];

            while (!st.empty() && st.top() <= num) {
                st.pop();
            }

            next[num] = st.empty() ? -1 : st.top();

            st.push(num);
        }

        vector<int> res(nums1.size());
        for (int i = 0; i < nums1.size(); i++) {
            res[i] = next[nums1[i]];
        }

        return res;
    }
};