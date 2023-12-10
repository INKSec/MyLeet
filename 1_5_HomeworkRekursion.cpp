// get average of array

#include <iostream>
using namespace std;

double average(int arr[], int len) {
    
    if (len == 1) {
        return arr[0];
    }

    double sub = average(arr, len -1);
    return (sub + arr[len-1]) / 2;

};

int main() {

    int arr[] = {1,8,2,10,3};
    cout << average(arr, 5) << endl;
    
    cin.get();
    return 0;
}

