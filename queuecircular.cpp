
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val) { // constructor
        data = val;
        next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;

    public:

    Queue() { // queue constructor
        head = tail = NULL;
    }

    void push(int data) { // insert at tail // O(1)
        Node* newNode = new Node(data);

        if (empty()) { // empty
            head = tail = newNode;
            tail->next = head; ///////// new line 
        } else { // not empty
            tail->next = newNode;
            tail = newNode;
            tail->next = head; /////////// new line
        }
    }

    void pop() { // O(1)
        if (empty()) {
            cout << "Queue is Empty" << endl;
            return;
        }

        if (head == tail) { // only one node
            delete head;
            head = tail = NULL;
        } else {
            Node* temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }
    }

    int front() { // O(1)
        if (empty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        return head->data;
    }

    bool empty() { // O(1)
        return head == NULL;
    }

    ~Queue() { // destructor
        while (!empty()) {
            pop();
        }
    }
};

int main() {
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3); // 1, 2, 3

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
