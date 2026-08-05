#include <iostream>
using namespace std;
int BintoDec (int binNum){
int ans = 0;
int pow = 1;
while(binNum > 0) {
    int rem = binNum % 10 ;
ans += pow*rem ;
binNum /= 10 ;
pow = pow * 2 ;
}
return ans ;
}
int main() {
int binNum = 110010 ;
 cout <<"binary to decimal = " << BintoDec(binNum) << endl ;

 
    return 0 ;
}




