#include <iostream>

using namespace std;

int main() {
    int numero1, numero2;

    cout << "Digite o primeiro número inteiro: ";
    cin >> numero1;

    cout << "Digite o segundo número inteiro: ";
    cin >> numero2;

    string mensagem;

    if (numero1 > numero2) {
        mensagem = to_string(numero1) + " é maior";
        if (numero1 % 2 == 0) {
            mensagem += " e é par";
        } else {
            mensagem += " e é ímpar";
        }
    } else if (numero2 > numero1) {
        mensagem = to_string(numero2) + " é maior";
        if (numero2 % 2 == 0) {
            mensagem += " e é par";
        } else {
            mensagem += " e é ímpar";
        }
    } else {
        mensagem = "Estes números são iguais";
    }

    cout << mensagem << endl;

    return 0;
}