#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> num = {1, 0, 3, 5, 0, 6, 2, 0};

    for (int x : num) {
        printf("%d ", x);
    }
    printf("\n");

    stable_partition(num.begin(), num.end(), [](int x) { return x != 0; });

    for (int x : num) {
        printf("%d ", x);
    }
    printf("\n");

    return 0;
}