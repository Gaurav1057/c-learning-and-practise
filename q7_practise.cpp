#include <iostream>
using namespace std;//sum of even numbers from 1 to n using while loop
int main() {
int i = 1;
int n = 10;
int evenSum = 0;
while(i<=n) {
if(i%2 == 0) {
evenSum=evenSum+i;
}
i++;
}
cout << evenSum ;
cout << endl ;

    return 0;
}