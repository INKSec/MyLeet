// Get Sum of array

#include <iostream>
using namespace std;

int sum(int arr[], int len) {


    
    if(len == 1) {
        return arr[len-1];
        
    }
    //int sub = sum(arr, len-1);
    //cout << sub << endl;
    int subresult = sum(arr, len-1);
    return subresult + arr[len-1];

};


int main() {
    int arr[] = { 1, 8, 2, 10, 3 };
    int a = sum(arr, 5);
    std::cout << a << std::endl;
	cin.get();
    return 1;
}