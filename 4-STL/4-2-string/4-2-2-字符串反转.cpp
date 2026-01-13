#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << " ";
    }
    cout << endl;

    for (int i = str.size() - 1; i >= 0; i--) {
        cout << str[i] << " ";
    }
    cout << endl;

    reverse(str.begin(), str.end());
    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << " ";
    }
    cout << endl;

    return 0;
}