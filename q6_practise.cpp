#include <iostream> 
using namespace std;
int main() {
int n = 10;
int evenSum = 0;

for(int i = 1;i<=n;i++) {

if (i%2 == 0) {

evenSum=evenSum+i;


}





}
cout << evenSum ;
cout << endl ;

    return 0;
}