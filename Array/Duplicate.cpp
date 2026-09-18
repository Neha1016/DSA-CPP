#include <iostream>
using namespace std;

int main()
{

    int arr[6];

    cout << "Enter 6 element :";

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    cout << " duplicate element : ";

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}