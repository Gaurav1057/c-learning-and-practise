#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;

    while (n > 1) {

        if (n % 2 != 0) {
            return false;
        }
        n = n / 2; 
    }

    return true; 
}

int main() {
    int num = 16;

    if (isPowerOfTwo(num)) {
        cout << num << " is a power of 2" << endl;
    } else {
        cout << num << " is NOT a power of 2" << endl;
    }

    return 0;
}