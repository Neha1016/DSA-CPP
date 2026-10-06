#include <iostream>
using namespace std;

int main()
{

    string str;

    cout << "Enter a string:";
    cin >> str;

    cout << "Duplicate Characters:";

    for (int i = 0; i < str.length(); i++)
    {

        bool alreadyChecked = false;

        for (int j = 0; j < i; j++)
        {

            if (str[i] == str[j])
            {

                alreadyChecked = true;
                break;
            }
        }

        if (alreadyChecked)
            continue;

        for (int j = i + 1; j < str.length(); j++)
        {

            if (str[i] == str[j])
            {

                cout << str[i] << " ";
                break;
            }
        }
    }

    return 0;
}