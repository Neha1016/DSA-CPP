#include <iostream>
using namespace std;

int main()
{
    int arr1[5];
    int arr2[5];

    // Input for arr1
    cout << "Enter 5 elements of arr1:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }

    // Input for arr2
    cout << "Enter 5 elements of arr2:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr2[i];
    }

    // Find common elements
    cout << "Common Elements: ";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}