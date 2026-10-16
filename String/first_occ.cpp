#include <iostream>
using namespace std;

int main()
{
    string str;
    char target;
    int index = -1;

    cout << "Enter a string:";
    getline(cin, str);

    cout << "Enter a character:";
    cin >> target;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "First Index = " << index;
    else
        cout << "Not Found";

    return 0;
}