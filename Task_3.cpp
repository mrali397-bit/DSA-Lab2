#include<iostream>
using namespace std;

// Function that prints address and value
void analyze_pointer(int *ptr) {
    cout << "Memory location pointed to by the pointer: " << ptr << endl;
    cout << "Value of the integer (which the pointer points to): " << *ptr << endl;
}

int main() {
    // int allocated on the stack
    int iValue;
    iValue = 30;
    cout << "Stack Variable:" << endl;
    analyze_pointer(&iValue);

    // int allocated on the heap
    int* hValue = new int;
    *hValue = 50;
    cout << "Heap Variable:" << endl;
    analyze_pointer(hValue);

    delete hValue; // free heap memory

    return 0;
}