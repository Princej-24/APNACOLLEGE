#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i=0; i<size; i++)
    if(arr[i]==target){
        return i;
    }
    return -1;
    
}
int main() {
	int arr[] = { 1,2,3,34,8,6 };
	int size = 6;
	int target=8;
	cout<<linearSearch(arr,size,target);
	return 0 ;

}
