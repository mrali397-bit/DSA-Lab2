#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically creating a string
    string* str = new string;

    cout << "Enter a string: ";
    getline(cin, *str); // Taking string input from user

    // Set left to the first character
    int left = 0;
    // Set right to the last character
    int right = str->length() - 1;

    // Continue until the left and right pointers meet
    while (left < right) {
        // Swap the characters at left and right positions
        swap((*str)[left], (*str)[right]);

        left++; // Move left pointer toward the center
        right--; // Move right pointer toward the center
    }

    // Display the reversed string
    cout << "Reversed string: " << *str << endl;

    // Free the dynamically allocated memory
    delete str;

    return 0;
}