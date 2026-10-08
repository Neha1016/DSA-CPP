#include <iostream>
using namespace std;
int main()
{

    string str;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {

        int count = 0;

        for (int j = 0; j < str.length(); j++)
        {

            {

                if (str[i] == str[j])
                {

                    count++;
                }
            }

            if (count == 1)
            {
                cout << "First Non-Repeating Character = " << str[i];
                return 0;
            }
        }

        cout << " No Non-Repeating Character";

        return 0;
    }
}
