#include <iostream>
using namespace std;

char nextLetter(char ch){
    if (ch == 'z') {
        return 'a';
    } else {
        return ch + 1;
    }
}

int main () {
    cout << nextLetter('Z');
    return 0;
}
