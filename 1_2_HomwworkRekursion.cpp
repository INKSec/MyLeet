#include <iostream>
using namespace std;

int my_pow(int value, int p = 3) {

    if(p==1) {
        return value;
    }
    return my_pow(value, p - 1) * value;

}

int main() {

    int a = my_pow(7);
    cout << a << endl;

    cin.get();
    return 1;
}