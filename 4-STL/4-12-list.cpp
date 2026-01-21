#include <iostream>
#include <list>
using namespace std;

class Person {
public:
    string name;
    int age;
    int idx;

    Person(string i_name, int i_age, int i_idx) {
        this->name = i_name;
        this->age = i_age;
        this->idx = i_idx;
    }
};

bool compare(const Person& pa, const Person& pb) {
    if (pa.age != pb.age) return pa.age < pb.age;
    else return pa.idx < pb.idx;
}

int main() {
    list<Person> p;
    Person p1("zhang", 11, 30);
    Person p2("li", 21, 2);
    Person p3("wang", 14, 10);
    Person p4("liu", 76, 40);
    Person p5("zhu", 14, 22);

    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);
    p.push_back(p5);

    p.sort(compare);

    for (Person q : p) {
        cout << q.name << " " << q.age << " " << q.idx << endl;
    }
}