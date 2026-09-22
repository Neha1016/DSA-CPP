#include <iostream>
using namespace std;
int main()
{

    int arr[5];

    cout << "Enter 5 elements : ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter target :";
    cin >> target;

    for (int i = 0; i < 5; i++)
    {

        for (int j = i + 1; j < 5; j++)
        {

            if (arr[i] + arr[j] == target)
            {

                cout << "Pair : " << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }
    cout << "No pair :";

    return 0;
    }
