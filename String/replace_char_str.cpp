#include <iostream>
using namespace std;
int main()
{
    string str;
    char oldChar, newChar;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter the character to be replaced :";
    cin >> oldChar;

    cout << "Enter the new character :";
    cin >> newChar;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == oldChar)
        {
            str[i] = newChar;
        }
    }

    cout << "Updated String :" << str;

    return 0;
}