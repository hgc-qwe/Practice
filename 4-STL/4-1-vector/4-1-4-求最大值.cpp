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

    int max = *(v.begin());
    for(int num : v) {
        if (max < num) max = num;
    }
    cout << max << endl;

    return 0;
}