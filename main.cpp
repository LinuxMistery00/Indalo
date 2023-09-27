#include <iostream>

// Protótipo da função C
extern "C" {
    #include "meuCodigo.c"
}

int main() {
    std::cout << "Isso é código C++." << std::endl;

    // Chame a função C a partir do código C++
    funcaoC();

    return 0;
}
