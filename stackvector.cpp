#include <bits/stdc++.h>
using namespace std;

class stack1{
	    vector<int> v;
	    
	    public:
	    
	    void push(int val){ //0(1)
	        v.push_back(val);
	    };
	    
	    void pop(){ //0(1)
	        v.pop_back();
	    };
	    
	    int top(){ //0(1)
	        return v[v.size()-1];
	    };
	    
	    bool empty(){
	        return v.size()==0;
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