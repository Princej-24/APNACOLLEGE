#include <iostream>
#include <list>
#include <vector>

using namespace std;

class stack1{
	    list<int> ll;
	    
	    public:
	    
	    void push(int val){ //0(1)
	        ll.push_front(val);
	    };
	    
	    void pop(){ //0(1)
	        ll.pop_front();
	    };
	    
	    int top(){ //0(1)
	        return ll.front();
	    };
	    
	    bool empty(){
	        return ll.size()==0;
	    };
	};

int main() {
    
    stack1 s;
    s.push(20);
    s.push(40);
    s.push(60);
    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
	
	return 0;

}