#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-1, 0, 8, 3, 0, 5, 7, -4};
    vector<int> res;

    int n = nums.size();
    res.resize(n + 1, 0);

    for (int i = 0; i < n; i++) {
        res[i + 1] = res[i] + nums[i];
    }

    int right, left;
    cin >> left;
    cin >> right;

    cout << res[right + 1] - res[left] << endl;

    return 0;
}