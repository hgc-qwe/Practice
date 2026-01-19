#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    int score;
    Person(string i_name, int i_score) {
        this->name = i_name;
        this->score = i_score;
    }
};

void createPerson(vector<Person>& v) {
    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++) {
        string name = "选手";
        name += nameSeed[i];
        int score = 0;

        Person p(name, score);
        v.push_back(p);
    }
}

void setScore(vector<Person>& v) {
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
        deque<int> d;
        for (int i = 0; i < 10; i++) {
            int score = rand() % 101;
            d.push_back(score);
        }
        cout << it->name << ":"<< endl;
        for (int num : d) {
            cout << num << " ";
        }
        cout << endl;

        sort(d.begin(), d.end());
        d.pop_back();
        d.pop_front();

        int sum = 0;
        for (int num : d) {
            sum += num;
        }

        int avg = sum / 8;
        it->score = avg;
    }
}

int main() {
    vector<Person> per;
    createPerson(per);

    setScore(per);
    for (vector<Person>::iterator it = per.begin(); it != per.end(); it++) {
        cout << it->name << " " << it->score << endl;
    }

    return 0;
}