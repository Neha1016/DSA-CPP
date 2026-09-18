#include <iostream>
using namespace std;

int main () {

    int arr[6];

    cout << "Enter 6 element :";

    for (int i = 0; i < 6; i++){
        cin >> arr[i];
    }

    cout << "Enter element  for find index :";

    int target;
    cin >> target;



    for (int i = 0; i < 6; i++){
        if (arr[i] == target) {
            cout << "Element found at index = " << i;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}