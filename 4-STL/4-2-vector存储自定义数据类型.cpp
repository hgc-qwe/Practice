#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void func(string i_name, int i_age) {
        this->name = i_name;
        this->age = i_age;
    }
};

int main() {
    vector<Person> a;

    Person p1; 
    p1.func("zhang", 11);
    a.push_back(p1);

    Person p2;
    p2.func("li", 12);
    a.push_back(p2);

    Person p3;
    p3.func("wang", 13);
    a.push_back(p3);

    for (vector<Person>::iterator it = a.begin(); it != a.end(); it++) {
        cout << it->name << "\t" << it->age << endl;
    }

    return 0;

}