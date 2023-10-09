#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 5;
    int c1, c2, c3;

    // Nesta expressão, a multiplicação e a divisão têm precedência sobre a adição e a subtração.
    // Portanto, a multiplicação e a divisão são executadas primeiro, seguidas pela adição e subtração.
    c1 = 4 * a + b / 3 - 5;

    // Nesta expressão, os parênteses alteram a ordem de execução das operações.
    // A adição dentro dos parênteses é executada primeiro, seguida pela multiplicação e, por fim, a divisão.
    c2 = 4 * (a + b) / (3 - 5);

    // Nesta expressão, os parênteses alteram a ordem de execução, fazendo a divisão ocorrer antes da multiplicação.
    c3 = 4 * a + (b / 3) - 5;

    cout << "Resultado da Expressão 1: " << c1 << endl;
    cout << "Resultado da Expressão 2: " << c2 << endl;
    cout << "Resultado da Expressão 3: " << c3 << endl;

    return 0;
}