#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    int x;
    cin >> x;
    int count = 0;
    for (int num : v) {
        if (num == x) count++;
    }
    cout << count << endl;

    return 0;
}