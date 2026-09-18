#include<iostream>
#include <cassert>
using namespace std;

// Function Prototype
bool isSorted(const int arr[], const int size);

// Test Functions Declaration
void testSortedArray();
void testUnsortedArray();
void testDuplicateValues();
void testSingleElement();
void testDescendingArray();
void testNegativeValues();
// Two Additional Test Functions
void testEmptyArray();
void testAllEqualElements();

int main() {
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testAllEqualElements();

    cout << "All tests passed!" << endl;

    return 0;
}

bool isSorted(const int arr[], const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

// Test Functions Definition
void testSortedArray() {
    int arr[] = {3, 6, 9, 12, 15};
    assert(isSorted(arr, 5) == true);
    cout << "testSortedArray PASSED!" << endl;
}

void testUnsortedArray() {
    int arr[] = {95, 2, 47, 83, 12};
    assert(isSorted(arr, 5) == false);
    cout << "testUnsortedArray PASSED!" << endl;
}

void testDuplicateValues() {
    int arr[] = {1, 5, 5, 9, 34};
    assert(isSorted(arr, 5) == true);
    cout << "testDuplicateValues PASSED!" << endl;
}

void testSingleElement() {
    int arr[] = {5};
    assert(isSorted(arr, 1) == true);
    cout << "testSingleElement PASSED!" << endl;
}

void testDescendingArray() {
    int arr[] = {96, 59, 23, 11, 6};
    assert(isSorted(arr, 5) == false);
    cout << "testDescending Array PASSED!" << endl;
}

void testNegativeValues() {
    int arr[] = {-56, -33, -12, -5, 1};
    assert(isSorted(arr, 5) == true);
    cout << "testNegativeValues PASSED!" << endl;
}

void testEmptyArray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true);
    cout << "testEmptyArray PASSED!" << endl;
}

void testAllEqualElements() {
    int arr[] = {5, 5, 5, 5, 5};
    assert(isSorted(arr, 5) == true);
    cout << "testAllEqualElements PASSED!" << endl;
}