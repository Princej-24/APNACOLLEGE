#include <bits/stdc++.h>
using namespace std;

int main() {
	int marks [5] = {1,2,3,4,5};
	int size = 5 ;
	cout<<sizeof(marks)<<endl; // 20
	cout<<sizeof(marks)/sizeof(int)<<endl; // 5
	
	for(int i=0; i<size; i++){
	    cout<<marks[i]<<endl;
	}
	

}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int size = 5 ;
	int marks [5];
	cout<<sizeof(marks)<<endl; // 20
	cout<<sizeof(marks)/sizeof(int)<<endl; // 5
	
	for(int i=0; i<size; i++){
	    cin>> marks[i];
	}
	
		
	for(int i=0; i<size; i++){
	    cout<<marks[i];
	}
	

}
