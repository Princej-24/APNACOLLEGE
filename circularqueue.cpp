#include <iostream> 
using namespace std;

class CircularQueue{
    int* arr;
    int currSize,cap;
    int f,r;

    public:

    CircularQueue(int size){ // Constructor
        cap=size;
        arr=new int[cap]; // to initialize memory in arr , arr created with equal size as cap
        currSize=0;
        f=0;
        r=-1;
    }

    void push(int data){ //0(1)
        if(currSize==cap){
            cout<<"CQ is FULL"<<endl;
            return;
        }
        r=(r+1)%cap;
        arr[r]=data;
        currSize++;
    }

    void pop(){ //0(1)
        if(empty()){
             cout<<"CQ is EMPTY"<<endl;
            return;
        }
        f=(f+1)%cap;
        currSize--;
    }

    int front(){ //0(1)
        if(empty()){
             cout<<"CQ is EMPTY"<<endl;
            return-1;
        }
        return arr[f];
    }

    bool empty(){ //0(1)
        return currSize==0;
    }

    void print(){
        for(int i=0;i<cap;i++){
            cout<<arr[i]<<" "<<endl;
        }
    }
};


int main(){
    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4); // CQ is FULL
    cq.pop(); // 2,3
    cq.push(4); // 4,2,3 iss order m elements print hokr ayenge means array ke elements ko hmne print krwaya h but if we talk about CQ then elements arranged in 2,3,4
    // cq.print();

    while(!cq.empty()){
        cout<<cq.front()<<" "<<endl; // 2,3,4
        cq.pop();
    }

    return 0;
}