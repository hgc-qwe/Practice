#include <iostream>
using namespace std;

int& func() {
    static int a = 100;
    return a;
}

int main() {
    int& b = func();
    cout << "b = " << b << endl;
    return 0;
}