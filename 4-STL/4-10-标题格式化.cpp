#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        while (i < str.size() && str[i] == ' ') i++;

        if (i < str.size()) {
            str[i] = toupper(str[i]);
            while (i < str.size() && str[i] != ' ') i++;
        }
    }
    cout << str << endl;

    return 0;
}