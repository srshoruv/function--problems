#include <iostream>
using namespace std;

void sumDig(int a);

int main(){
    sumDig(123);
    return 0;
}

void sumDig(int a){
    int sum = 0;

    while (a > 0) {
        int lastDig = a % 10;
        sum = sum + lastDig;
        a /= 10;
    }
    cout << "The sum of the digits is: " << sum << endl;
}