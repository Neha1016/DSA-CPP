#include <iostream>
using namespace std;
int main()
{
    string str1, str2;

    cout << "Enter first string:";
    getline(cin, str1);

    cout << "Enter second string:";
    getline(cin, str2);

    if (str1.length() != str2.length())
    {
        cout << "Not Rotation";
        return 0;
    }

    string combined = str1 + str1;

    if (combined.find(str2) != string::npos)
    {
        cout << "Rotation";
    }
    else
    {
        cout << "Not Rotation";
    }

    return 0;
}