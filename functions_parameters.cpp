#include <iostream>
using namespace std;

int minOfTwo(int a,int b) { //here a and b are parameters
if(a<b) {
    return a;
}else{
    return b;
}
}
int main() {

cout << "min : " << minOfTwo(5,8) ; //here 5 and 8 which are actual values passes to function are callesd arguments




    return 0;
}