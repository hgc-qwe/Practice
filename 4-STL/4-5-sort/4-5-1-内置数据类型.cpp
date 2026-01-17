#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v.push_back(val);
    }

    sort(v.begin(), v.end());
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}