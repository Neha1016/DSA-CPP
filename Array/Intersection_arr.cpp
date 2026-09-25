#include <iostream>
using namespace std;
int main()
{

    int arr1[5] = {1, 2, 2, 3, 4};
    int arr2[5] = {1, 2, 4, 5, 6};

    cout << "Common Elements: ";

    for (int i = 0; i < 5; i++)
    {

        bool found = false;

        for (int j = 0; j < 5; j++)
        {

            if (arr1[i] == arr2[j])
            {

                found = true;

                break;
            }
        }

        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++)
        {

            if (arr1[k] == arr1[i])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if (found && !alreadyPrinted)
            cout << arr1[i] << " ";
    }

    return 0;
}