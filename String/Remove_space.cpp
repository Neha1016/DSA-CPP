#include <iostream>
using namespace std;
int main()
{

    string str;

    cout << "Enter a string : ";
    getline(cin, str);

    cout << "String without spaces :";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            cout << str[i];
        }
    }

    return 0;
}