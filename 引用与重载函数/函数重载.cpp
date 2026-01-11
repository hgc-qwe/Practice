#include <iostream>
using namespace std;

void func(int a, int b) {
    cout << a + b << endl;
}

void func(int a, double b) {
    cout << a * b << endl;
}

int main() {
    int x = 10;
    int y = 20;
    double z = 0.60;

    func(x, y);
    func(x, z);

    return 0;
}