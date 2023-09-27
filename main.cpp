#include <iostream>

// Declare a C-style function
extern "C" {
    void myCFunction() {
        std::cout << "This is a C-style function." << std::endl;
    }
}

int main() {
    std::cout << "Hello from C++!" << std::endl;

    // Call the C-style function
    myCFunction();

    return 0;
}
