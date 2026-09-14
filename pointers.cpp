#include <iostream> 
using namespace std;

int main(){
    int a=10;
    int *ptr=&a;
    int **ptr2=&ptr; // pointer to pointer
    cout<<*(&a); // derefernce operator = it gives the value stored at that reference

    return 0;
}