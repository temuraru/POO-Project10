#include <iostream>
#include "figuri.h"

void testPunct(Factori f_translatare, Factori f_scalare) {
    Punct p0;
    Punct p(1.2, 4.5);
    Punct p_copy = p;
    p = p + f_translatare;
    Punct pc = p; // verificare constructor copiere
    p = p - f_translatare; // verificare translatare -
    Punct ps = p * f_scalare;
    std::cout << "Constructor implicit: " << p0 << "Initial (copiere): " << p_copy << "Translatare: " << pc << "Translatare (-): " << p << "Scalare: " << ps;
}

int main() {
    Factori f_translatare(1.8, 3.5);
    Factori f_scalare(2, 4);
    testPunct(f_translatare, f_scalare);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
