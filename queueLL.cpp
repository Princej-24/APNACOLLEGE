#include <iostream> 
#include <vector>
using namespace std; 
 
class Node{ 
    public: 
    int data; 
    Node* next; 
 
    Node(int val){ // constructor 
        data=val; 
        next=NULL; 
    } 
}; 
 
class Queue{ 
    Node* head; 
    Node* tail; 
 
    public: 
 
    Queue(){ // queue constructor 
        head=tail=NULL; 
    } 
 
    void push(int data){ // means insert data at tail // we have two options either LL is empty or not //0(1) 
        Node* newNode = new Node(data); 
        if(empty()){ // empty 
            head=tail=newNode; 
        }else{ // not empty  
            tail->next=newNode; 
            tail=newNode; 
        } 
    } 
 
    void pop(){ //0(1) 
        if(empty()){ 
            cout<<"Queue is Empty"<<endl; 
            return ; 
        }else{ 
            Node* temp=head; 
            head=head->next; 
            delete temp;

            if(head==NULL){
                tail=NULL;
            }
        } 
    } 
 
    int front(){ //0(1) 
        if(empty()){ 
            cout<<"Queue is Empty"<<endl; 
            return -1 ; 
        } 
        return head->data; 
    } 
 
    bool empty(){ //0(1) 
        return head==NULL; 
    } 
}; 
 
int main(){ 
        Queue q; 
 
        q.push(1); 
        q.push(2); 
        q.push(3); // 1,2,3 
 
        while(!q.empty()){ 
            cout<<q.front()<<" "<<endl; 
            q.pop(); 
        } 
 
        return 0; 
}