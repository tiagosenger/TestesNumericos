#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Digite o primeiro número inteiro: ";
    cin >> a;
    cout << "Digite o segundo número inteiro: ";
    cin >> b;

    c = 4 * (a + b) / (3 - 5);

    cout << "O resultado da expressão 4 * (a + b) / (3 - 5) é: " << c << endl;

    return 0;
}