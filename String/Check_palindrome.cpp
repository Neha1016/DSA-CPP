#include <iostream>
using namespace std;
int main()
{

    string str;
    bool palindrome = true;

    cout << "Enter a string : ";
    cin >> str;

    int n = str.length();

    for (int i = 0; i < n / 2; i++)
    {

        if (str[i] != str[n - 1 - i])

        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}