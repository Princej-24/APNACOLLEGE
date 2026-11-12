#include <iostream>
#include <queue>

using namespace std;

class queue1 {
    queue<int> q;

public:

    void push(int val) { // O(1) average
        q.push(val);
    }

    void pop() { // O(1)
        q.pop();
    }

    int front() { // O(1)
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {

    queue1 q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
