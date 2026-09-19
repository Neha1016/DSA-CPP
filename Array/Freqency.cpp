#include <iostream>
using namespace std;
int main () {

    int arr[5];
    bool visited[5] = {false};

    cout << "Enter 5 elements :";

    for (int i = 0; i < 5; i ++){
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {

        if (visited[i])
            continue;

        int count = 1;

        for (int j = i + 1; j < 5; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " = " << count << endl;
    }

    return 0;
}