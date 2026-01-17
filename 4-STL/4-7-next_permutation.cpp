#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 3, 4};

    do {
        for(int num : v) cout << num << " ";
        cout << endl;
    } while(next_permutation(v.begin(), v.end()));

    string str = "acd";
    do {
        cout << str << endl;
    } while(next_permutation(str.begin(), str.end()));

    return 0;
}