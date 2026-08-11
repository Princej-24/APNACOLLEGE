#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int size){
    int start=0 , end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main() {
	int arr[] = { 1,2,3,34,8,6 };
	int size = 6;
	reverseArray(arr,size);
	for(int i=0; i<size; i++){
	    cout<<arr[i]<<endl;
	}
	return 0 ;

}
