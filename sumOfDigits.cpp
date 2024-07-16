#include <iostream>
using namespace std;


int main(){
    int a = 134;
    int sum = 0;
    while (a > 0){
        int num = a % 10;
        sum += num;
        a / 10;
        
    } 
    cout << a;
}