#include <bits/stdc++.h>
using namespace std;

class Stack {
    int arr[100];
    int topIndex;

public:

    Stack() {
        topIndex = -1;
    }

    void push(int val) { // O(1)
        topIndex++;
        arr[topIndex] = val;
    }

    void pop() { // O(1)
        if (topIndex == -1) {
            cout << "Stack is empty\n";
            return;
        }

        topIndex--;
    }

    int top() { // O(1)
        if (topIndex == -1) {
            cout << "Stack is empty\n";
            return -1;
        }

        return arr[topIndex];
    }

    bool empty() {
        return topIndex == -1;
    }
};

int main() {

    Stack s;

    s.push(20);
    s.push(40);
    s.push(60);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}