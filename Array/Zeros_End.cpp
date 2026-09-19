#include <iostream>
using namespace std;
int main()
{

    int arr[5];

    cout << "Enter 5 element :";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int j = 0;

    for (int i = 0; i < 5; i ++){

        if(arr[i] != 0){

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    for (int i = 0; i < 5; i ++) {

        cout << arr[i] << " ";
    }

    return 0;
}
