#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void func(int x) {
    cout << x << " ";
}

int main() {
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    for (vector<int>::iterator begin = a.begin(); begin != a.end(); *begin++) {
        cout << *begin << " ";
    }
    cout << endl;

    for_each(a.begin(), a.end(), func);
    cout << endl;

    return 0;
}