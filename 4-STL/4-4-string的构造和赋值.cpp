#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello World!";
    cout << "str1 = " << str1 << endl;

    const char* s = "Hello C++";
    string str2(s);
    cout << "str2 = " << str2 << endl;

    string str3(str2);
    cout << "str3 = " << str3 << endl;

    string str4(10, '*');
    cout << "str4 = " << str4 << endl;

    string str5;
    str5 = "hello world!";
    cout << "str5 = " << str5 << endl;

    string str6;
    str6 = str5;
    cout << "str6 = " << str6 << endl;

    string str7;
    str7 = '#';
    cout << "str7 = " << str7 << endl;

    string str8;
    str8.assign("hello C++");
    cout << "str8 = " << str8 << endl;

    string str9;
    str9.assign("hello C++", 5);
    cout << "str9 = " << str9 << endl;

    string str10;
    str10.assign(str5);
    cout << "str10 = " << str10 << endl;

    string str11;
    str11.assign(10, '#');
    cout << "str11 = " << str11 << endl;

    return 0;
}