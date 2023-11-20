#include <iostream>
using namespace std;

int lenght_3n_plus_1 (int n) {

    std::cout << n << " ";
    if(n==1) {
        return 1;
    }
    if(n%2 == 0) {
        return lenght_3n_plus_1(n/2) + 1;
    } 
    if(n%2 != 0) {
        return lenght_3n_plus_1(3*n+1) + 1;
    }




}

int main() {

    int a = lenght_3n_plus_1(6);
    cout << "\n" << "length of the sequence: " << a << endl;
    cin.get();
    return 1;
}