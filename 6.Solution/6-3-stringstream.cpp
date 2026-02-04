#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        stringstream s(path);
        string ss;

        while (getline(s, ss, '/')) {
            if (ss == "." || ss.empty()) continue;
            else if (ss == "..") {
                if (!stack.empty()) {
                    stack.pop_back();
                }
            } else {
                stack.push_back(ss);
            }
        }

        string res;
        if (stack.empty()) return "/";

        for (const string& str : stack) {
            res += "/" + str;
        }

        return res;
    }
};