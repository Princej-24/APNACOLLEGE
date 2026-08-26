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
                temp=temp->next; 
            } 
            temp->next=NULL; 
            delete tail; 
            tail=temp; 
        } 
 
        void insert(int val , int pos){ 
            if(pos<0){ 
                cout<<"position is invalid"<<endl; 
                return; 
            } 
            if(pos==0){ 
                push_front(val); 
                return; 
            } 
 
            Node* temp = head; 
            for(int i=0;i<pos-1;i++){ // previous position 
                if(temp==NULL){ // if position > LL size 
                    cout<<"Invalid position"<<endl;
                    return;
                }
                temp=temp->next; 
            } 
            Node* newNode= new Node(val); 
            newNode->next=temp->next; // to preserve the rest nodes
            temp->next=newNode; 
 
 
            } 

        void printLL(){ 
                Node* temp=head; 
                while(temp!=NULL){ 
                    cout<<temp->data<<"->"; 
                    temp=temp->next; 
                } 
                cout<<"->NULL"<<endl; 
            } 

            int search(int key){ // to search
                Node* temp=head;
                int indx=0;
                
                while(temp!=NULL){
                    if(temp->data==key){
                        cout<<"key is found"<<endl;
                        return indx;
                    }
                    temp=temp->next;
                    indx++;
                }
                return -1;
            }
        }; 
 
    int main(){ 
        List ll; 
        ll.push_front(5); 
        ll.push_front(4); 
        ll.push_front(3); 
        ll.push_front(3); 
        ll.push_front(1); // 1 2 3 4 5 
 
        ll.insert(0,1); // 0 1 2 3 4 5 
 
 
        ll.printLL(); 

        cout<<ll.search(4)<<endl;
 
        return 0; 
    }