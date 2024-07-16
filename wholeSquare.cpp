#include <iostream>
using namespace std;

int wholeSquare(int a, int b);

int main(){
    cout << wholeSquare(3,4) << endl;
    return 0;
}

int wholeSquare(int a, int b){
    int result = (a*a) + (b*b) + 2*a*b;
    return result;
}