#include <math.h>
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    int sum = a+b;
    int difference = a-b;
    int product = a*b;
    int quotient = a/b;
    int remainder = a%b;

    cout << "sum = " << sum << ", difference = " << difference << ", product = " << product << ", quotient = " << quotient << ", remainder = " << remainder;

    return 0;
}