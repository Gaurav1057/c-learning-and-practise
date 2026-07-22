#include <iostream> // print A to I in 3 rows and columns
using namespace std;
int main() {
int n = 3;
char ch = 'A';

for(int i = 0;i<n;i++) {
    for(int j = 0;j<n;j++) {
        cout << ch ;
        ch=ch+1;
    }
    cout << endl ;
}









    return 0;
}