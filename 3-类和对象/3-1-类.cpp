#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    string umber;

    void func() {
        cout << name << " " << umber << endl;
    }
};

int main() {
    Student stu;
    cin >> stu.name;
    cin >> stu.umber;

    stu.func();

    return 0;
}