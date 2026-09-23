#include <iostream>
using namespace std;
int main()
{

    int arr[7];

    cout << "Enter 7 element :";

    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < 7; i++)
    {

        for (int j = 0; j < 7; j++)
        {

            if (arr[i] == arr[j])
                count++;
        }

        if (count > 7 / 2)
        {
            cout << "Majority Element = " << arr[i];
            return 0;
        }
    }

    cout << "No Majority Element ";

    return 0;
}