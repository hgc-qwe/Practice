#include <iostream>
#include <map>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string i_name, int i_age) {
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
    map<Person, int, compare> m;
    Person p1("zhang", 11);
    Person p2("li", 32);
    Person p3("wang", 22);
    Person p4("wu", 14);
    Person p5("lu", 16);

    m.insert(make_pair(p1, 1));
    m.insert(make_pair(p2, 2));
    m.insert(make_pair(p3, 3));
    m.insert(make_pair(p4, 4));
    m.insert(make_pair(p5, 5));

    for (map<Person, int, compare>::iterator it = m.begin(); it != m.end(); it++) {
        cout << it->second << " " << it->first.name << " " << it->first.age << endl;
    }

    return 0;

}