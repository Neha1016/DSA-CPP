#include <iostream>
using namespace std;
int main () {

    int arr[5];

    cout << "Enter 5 element :";

    for (int i = 0; i < 5; i ++){
        cin >> arr[i];
    }

    bool sorted = true;

    for (int i = 0; i < 4; i++){
        if(arr[i] > arr[i+1]){
            sorted = false;
            break;
        }
    }
    if (sorted)
        cout << "Sorted" ;
    else
        cout << "Not sorted";

    return 0;
}
