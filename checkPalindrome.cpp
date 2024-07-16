#include <iostream>
using namespace std;

void isPali(int a);

int main(){
    isPali(121);
    return 0;
}

void isPali(int a){
    int num = 0;
    int n = a;
    int last;
    while (a > 0){

        last = a % 10;
        num = num * 10 + last;
        a /= 10;
    }
    if (n == num) {
        cout << n << " is a palindrome number";
    } else {
        cout << n << " is NOT a palindrome number";
    }

}