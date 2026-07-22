#include <iostream>
using namespace std;


int factorialN(int N ) {
    int fact = 1;
    for(int i = 1;i<=N;i++) {
        fact*=i;
    }
    return fact ;
}
int main() {
cout << "Factorial = " << factorialN(6) << endl ;



    return 0;
}