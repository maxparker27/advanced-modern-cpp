#include <iostream>
using namespace std;

int test_function(int y) {

    cout << "Address of y is: " << &y << endl; 
    return y * 2;

}

int main() {

    cout << test_function(2);
    return 0;

}