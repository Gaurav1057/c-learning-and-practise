#include <iostream>
using namespace std;
int DectoBin(int DecNum) {
int ans = 0;
int pow = 1;
while (DecNum > 0) {
    int rem = DecNum%2;
    ans += rem*pow ;
    DecNum /= 2 ;
    pow = pow*10 ;
}
return ans ;
}
int main() {
int DecNum = 50 ;
for(int i = 1 ; i<=10; i++) {
    cout << "Decimal to Binary = " << DectoBin(i) << endl ;
}


    return 0 ;
}