// increment each arr[i] with i
#include <iostream>
using namespace std;


void array_increment(int arr[], int len) {
    if(len == 1) {
        cout << arr[len-1] << endl;
        return;
    }
    array_increment(arr, len - 1);
    cout << arr[len-1] + len - 1 << endl;
};

int main() {

    int arr[] = {1,8,2,10,3};
    array_increment(arr, 5);
    cin.get();
    return 1;
}