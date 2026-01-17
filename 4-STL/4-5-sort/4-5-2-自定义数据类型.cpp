#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string i_name, int i_age) {
        this->name = i_name;
        this->age = i_age;
    }

    bool operator < (const Person& p) const {
        return age < p.age;
    }
};

int main() {
    vector<Person> v;
    Person p1("zhang", 14);
    Person p2("li", 12);
    Person p3("wang", 11);
    Person p4("zhao", 15);
    Person p5("wu", 13);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    sort(v.begin(), v.end());
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
        cout << it->name << "\t" << it->age << endl;
    }

    return 0;
}