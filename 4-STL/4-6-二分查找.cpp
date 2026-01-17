#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {0, 1, 2, 2, 4, 5, 7, 7, 9};
    auto lb = lower_bound(v.begin(), v.end(), 2); // 2
    auto ub = upper_bound(v.begin(), v.end(), 2); // 4

    int count = ub - lb;
    cout << "count = " << count << endl;

}