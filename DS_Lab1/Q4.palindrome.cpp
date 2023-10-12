#include<iostream>
#include<cstring>
using namespace std;

bool Palindrome(const string & str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return Palindrome(str, start + 1, end - 1);
}

bool PalindromeString(const string & str) {
    int length = str.length();
    return Palindrome(str, 0, length - 1);
}

int main() {
    string input;
    cout << "Enter the string: ";
    getline(cin, input);

    if (PalindromeString(input)) {
        cout << "The entered string is a palindrome." <<endl;
    } else {
        cout << "The entered string is not a palindrome." <<endl;
    }

    return 0;
}

/* Input
 * Book
 * MalayalaM
 * Output
 * Enter the string: Book
 * The entered string is not a palindrome.
 * 
 * Enter the string: MalayalaM
 * 
 * The entered string is a palindrome.
 * */
