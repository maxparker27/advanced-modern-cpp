#include <iostream>
using namespace std;

// using pointer int func here with asterisk
int test_function(const int& y) {

    cout << "Address of y is: " << &y << endl; 
    
    // y = 1; // cannot assign value since we're using const 
    
    return y * 2;

}

int main() {

    int x = 2;
    cout << test_function(x);
    return 0;

}