#include <iostream>
using namespace std;

void func(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int a = 10;
    int b = 100;
    func(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}