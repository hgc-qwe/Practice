#include <iostream>
#include <set>
#include <string>
using namespace std;

class Person {
public:
    int age;
    string name;

    Person(const string& i_name, const int& i_age) {
        this->name = i_name;
        this->age = i_age;
    }
};

class compare {
public:
    bool operator() (const Person& p1, const Person& p2) const {
        return p1.age < p2.age;
    }
};

int main() {
    multiset<Person, compare> s;

    Person p1("zhang", 11);
    Person p2("li", 10);
    Person p3("wang", 11);
    Person p4("liu", 12);
    Person p5("wu", 15);

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);
    s.insert(p5);

    for (const Person& p : s) {
        cout << p.name << " " << p.age << endl;
    }

    return 0;
}