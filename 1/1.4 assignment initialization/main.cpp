#include <iostream>

int main() {
    int a;         // default-initialization (no initializer)
    // indeterminate initialization
    a = 4;

    // Traditional initialization forms:
    int b = 5;     // copy-initialization (initial value after equals sign)
    int c ( 6 );   // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d { 7 };   // direct-list-initialization (initial value in braces)
    int e {};      // value-initialization (empty braces)
    // zero initialization / overriden by any defaults
    std::cout << a << b << c << d << e;
}