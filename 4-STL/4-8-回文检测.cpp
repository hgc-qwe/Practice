#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int left = 0;
    int right = str.size() - 1;

    while (left < right) {
        if (str[left] == str[right]) {
            left++;
            right--;
        } else {
            cout << "不是回文" << endl;
            return 0;
        }
    }

    cout << "是回文" << endl;
    return 0;
}