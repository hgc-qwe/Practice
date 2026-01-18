#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_front(10);
    d.push_front(20);
    d.push_front(30);
    d.push_front(40);
    d.push_front(50);

    for (int num : d) {
        cout << num << " ";
    }
    cout << endl;

    d.pop_front();
    for (int num : d) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}