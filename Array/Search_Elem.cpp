#include <iostream>
using namespace std;

int main()
{

    int arr[5];

    cout << "Enter 5 array element :";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter element to search in array :";
    cin >> target;

    bool found = false;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target){
            found = true;
        break;
    }
}

    if (found)
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}