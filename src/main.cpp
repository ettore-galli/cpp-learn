#include <iostream>

int main() {
    std::cout << "Inserisci due numeri interi: ";

    int a = 0;
    int b = 0;

    if (!(std::cin >> a >> b)) {
        std::cerr << "Input non valido.\n";
        return 1;
    }

    int somma = a + b;
    std::cout << "La somma è: " << somma << '\n';

    return 0;
}
