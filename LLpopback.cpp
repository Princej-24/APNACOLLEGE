#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }

};

class List{
        Node* head;
        Node* tail;

    public:

        List(){
            head=tail=NULL;
        }
        void push_front(int val){
            Node* newNode = new Node(val); // 1st syntax to create new node , dynamic object
            // Node newNode(val); // 2nd syntax , but this will create static object that means if u take out control from this function this static will vanish u can't call it anywhere 
            if(head==NULL){ // case 1: when linked list is empty 
                head=tail=newNode;
                return;
            }else{
                newNode->next=head;
                head=newNode;
            }
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head==NULL){
                head=tail=newNode;
                return;
            }else{
                tail->next=newNode;
                tail=newNode;
            }
        }
        void pop_front(){
            if(head==NULL){
                cout<<"empty"<<endl;
                return;
            }
            Node* temp = head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        } 

        void pop_back(){
            if(head==NULL){
                cout<<"empty"<<endl;
                return;
            }
            Node* temp = head;
            while(temp->next!=tail){ // previous node 
                temp=temp->next // at this point temp is pointing second last node 
            }
            temp->next=NULL;
            delete tail;
            tail=temp; // shifting tail to temp 
        }

        void printLL(){
                Node* temp=head;
                while(temp!=NULL){
                    cout<<temp->data<<"->";
                    temp=temp->next;
                }
                cout<<"->NULL"<<endl;
            }
    };

    int main(){
        List ll;
        ll.push_front(1);
        ll.push_front(2);
        ll.push_front(3);
        ll.push_front(4);
        ll.push_front(5); // 5 4 3 2 1

        ll.push_back(6); // 5 4 3 2 1 6

        ll.pop_front(); // 4 3 2 1 6

        ll.pop_back(); // 4 3 2 1 

        ll.printLL();

        return 0;
    }