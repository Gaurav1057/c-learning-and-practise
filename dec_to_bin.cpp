#include <iostream>
using namespace std;
int DectoBin (int DecNum) {
int ans = 0;
int pow = 1;
while (DecNum > 0) {
  int   rem = DecNum%2 ;
  ans += rem*pow ;
  DecNum = DecNum / 2;
  pow = pow*10 ;

}
return ans ;
}

int main() {
int DecNum = 50 ;
cout <<"Decimal to binary = " << DectoBin(DecNum) << endl ;
    return 0 ;
}