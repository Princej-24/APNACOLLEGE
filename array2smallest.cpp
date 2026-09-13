#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[] = {23,11,3,44,-4,33};
    int size = 6;
    int smallest = INT_MAX ;
    
    for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
    smallest = (min(nums[i],smallest)); 
    }
    
    cout<<smallest;
    
}

// printing smallest index 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[] = {23, 11, 3, 44, -4, 33};
    int size = 6;

    int smallest = INT_MAX;
    int smallestIndex = -1;

    for(int i = 0; i < size; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;
        }
    }

    cout << "Smallest value = " << smallest << endl;
    cout << "Index = " << smallestIndex;

    return 0;
}
