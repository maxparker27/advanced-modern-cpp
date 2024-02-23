#include <iostream>
using namespace std;

// using pointer int func here with asterisk
int test_function(int *y) {

    cout << "Address of y is: " << &y << endl; 
    return *y * 2;

}

int main() {

    int x = 2;
    cout << test_function(&x);
    return 0;

}