#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> Numbers = {1, 2, 3, 4};
    

    //Display numbers
    for(int number:Numbers) {
        cout << number << ",";
    }
    return 0;
}