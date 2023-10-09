#include <iostream>

using namespace std;

int main() {
    int numero1, numero2;

    cout << "Digite o primeiro número inteiro: ";
    cin >> numero1;

    cout << "Digite o segundo número inteiro: ";
    cin >> numero2;

    cout << (numero1 > numero2 ? to_string(numero1) + " é maior" : (numero2 > numero1 ? to_string(numero2) + " é maior" : "Estes números são iguais")) << endl;

    return 0;
}
