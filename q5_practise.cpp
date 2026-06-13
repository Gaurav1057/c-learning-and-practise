#include <iostream>//sum of all odd numbers upto n using while loop
using namespace std;
int main() {
     int i = 1;
     int n = 5;
     int sum = 0;
    while(i<=n) {  
        if(i%2 != 0) {

          sum=sum+i;
         


        }
        i++;
    



    }

   cout << sum ;
   cout << endl ;


    return 0;
}