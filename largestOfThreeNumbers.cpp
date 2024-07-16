#include <iostream>
using namespace std;

int findLargest(int a, int b, int c);
double findLargest(double a, double b, double c);

int main(){
    findLargest(39.3,77.2,12.3);
    return 0;
}

int findLargest(int a, int b, int c){
    if (a > b && a > c){
        cout << a << " is the largest number" << endl;
    } else if (b > a && b > c) {
        cout << b << " is the largest number" << endl;
    } else{
        cout << c << " is the largest number" << endl;
    }

    return 0;
}

double findLargest(double a, double b, double c){
    if (a > b && a > c){
        cout << a << " is the largest number" << endl;
    } else if (b > a && b > c) {
        cout << b << " is the largest number" << endl;
    } else{
        cout << c << " is the largest number" << endl;
    }

    return 0;
}