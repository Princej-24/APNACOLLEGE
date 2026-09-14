#include <iostream>
using namespace std;

void changeA(int* ptr) { // pass by reference using pointers
    *ptr = 20;
}

int main() {
    int a = 10;

    changeA(&a);

    cout<< a << endl; // 20

    return 0;
}


#include <iostream>
using namespace std;

void changeA(int &b) { // pass by reference using alias
    b = 20;
}

int main() {
    int a = 10;

    changeA(a);

    cout<< a << endl; // 20

    return 0;
}
// arr is itself a constant pointer 


#include <iostream>
using namespace std;

int main() {
   int ptr2;
   int ptr1 = ptr2 + 2; // add 8 bytes 
   cout<<ptr1-ptr2; // ans 2 int of 8 bytes 
}