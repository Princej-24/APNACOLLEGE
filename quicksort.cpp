#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>&arr,int st,int end){ // part 2 - partition part

    int idx=st-1,pivot=arr[end];

    for(int j=st;j<end;j++){ // for comparison with pivot element 
        if(arr[j]<=pivot){ // for decending just change the sign (arr[j]>=pivot)
            idx++; 
            swap(arr[j],arr[idx]); // to assign the correct posi for small elements then pivot
        }
    }
    idx++;
    swap(arr[end],arr[idx]); // to find the correct posi of pivot element
    return idx;
}

void quickSort(vector<int>&arr,int st,int end){ // Part 1 - QS part
    if(st<end){
        int pivIdx=partition(arr,st,end);

        quickSort(arr,st,pivIdx-1); // call for Left Half
        quickSort(arr,pivIdx+1,end); // call for Right Half


    }
}

int main(){

    vector<int>arr={12,31,35,8,32,17};
    quickSort(arr,0,arr.size()-1);

    for(int val:arr){
        cout<<val<<" ";  
    }
    return 0;
}
// this is for ascending
// if we want to sort in decending then we have to change in one line only ,in the line 10 