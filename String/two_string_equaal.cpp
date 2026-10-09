#include <iostream>
using namespace std;
int main()

{
    string str1, str2;

    cout << "Enter first string : ";
    cin >> str1;

    cout << "Enter second string : ";
    cin >> str2;

    if (str1 == str2) {
        cout << "The strings are equal." << endl;
    } else {
        cout << "The strings are not equal." << endl;
    }

    return 0;
}