#include <iostream>
using namespace std;


int main(){
    int a = 134;
    int n = a;
    int sum = 0;
    int lastDig;

    while (n > 0) {
        lastDig = n % 10;
        sum = sum + lastDig;
        n /= 10;
    }
    cout << sum;
}