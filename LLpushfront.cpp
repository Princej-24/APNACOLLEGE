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
        ll.push_front(5);

        ll.printLL();

        return 0;
    }