#include <bits/stdc++.h>
using namespace std;

class Queue {
    int arr[100];
    int frontIndex;
    int rearIndex;

public:

    Queue() {
        frontIndex = -1;
        rearIndex = -1;
    }

    void enqueue(int val) { // O(1)
        if (rearIndex == 99) {
            cout << "Queue is full\n";
            return;
        }

        if (frontIndex == -1) {
            frontIndex = 0;
        }

        rearIndex++;
        arr[rearIndex] = val;
    }

    void dequeue() { // O(1)
        if (frontIndex == -1 || frontIndex > rearIndex) {
            cout << "Queue is empty\n";
            return;
        }

        frontIndex++;

        if (frontIndex > rearIndex) {
            frontIndex = -1;
            rearIndex = -1;
        }
    }

    int front() { // O(1)
        if (frontIndex == -1) {
            cout << "Queue is empty\n";
            return -1;
        }

        return arr[frontIndex];
    }

    bool empty() {
        return frontIndex == -1;
    }
};

int main() {

    Queue q;

    q.enqueue(20);
    q.enqueue(40);
    q.enqueue(60);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.dequeue();
    }

    return 0;
}
