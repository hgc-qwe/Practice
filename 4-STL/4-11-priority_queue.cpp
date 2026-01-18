#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(20);
    pq.push(40);
    pq.push(10);
    pq.push(50);
    pq.push(30);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(2);
    min_pq.push(4);
    min_pq.push(1);
    min_pq.push(5);
    min_pq.push(3);

    while (!min_pq.empty()) {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }
    cout << endl;

    return 0;
}