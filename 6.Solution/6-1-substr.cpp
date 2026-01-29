#include <istream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        int num = strs.size();
        for (int i = 0; i < strs[0].length(); i++) {
            char current = strs[0][i];

            for (int j = 1; j < num; j++) {
                if (strs[j][i] != current || strs[j].length() <= i) return strs[0].substr(0, i);
            }
        }

        return strs[0];
    }
};