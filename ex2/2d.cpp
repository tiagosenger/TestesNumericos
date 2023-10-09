#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Digite o primeiro número inteiro: ";
    cin >> a;
    cout << "Digite o segundo número inteiro: ";
    cin >> b;

    int resultado = 4 * a + b / 3 - 5;

    cout << "O resultado da expressão 4 * a + b / 3 - 5 é: " << resultado << endl;

    return 0;
}