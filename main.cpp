#include <iostream>

// Protótipo da função C
extern "C" {
    #include "window.c"
}

int main() {
    funcaoC();

    return 0;
}