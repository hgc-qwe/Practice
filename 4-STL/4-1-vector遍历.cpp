#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void func(int x) {
    cout << x << " ";
}

int main() {
    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);

    for (vector<int>::iterator begin = a.begin(); begin != a.end(); begin++) {
        cout << *begin << " ";
    }
    cout << endl;

    for_each(a.begin(), a.end(), func);
    cout << endl;

    return 0;
}