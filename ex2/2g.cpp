#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 5;
    int c1, c2, c3;

    c1 = 4 * a + b / 3 - 5;
    c2 = 4 * (a + b) / (3 - 5);
    c3 = 4 * a + (b / 3) - 5;

    cout << "Resultado da Expressão 1: " << c1 << endl;
    cout << "Resultado da Expressão 2: " << c2 << endl;
    cout << "Resultado da Expressão 3: " << c3 << endl;

    c1 = a * a + 2 * b + c1;
    c2 = a * a + 2 * b + c2;
    c3 = a * a + 2 * b + c3;

    cout << "Resultado após recálculo (Expressão 1): " << c1 << endl;
    cout << "Resultado após recálculo (Expressão 2): " << c2 << endl;
    cout << "Resultado após recálculo (Expressão 3): " << c3 << endl;

    return 0;
}