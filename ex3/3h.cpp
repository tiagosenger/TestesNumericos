#include <iostream>

using namespace std;

int main() {
    int numero1, numero2;

    cout << "Digite o primeiro número inteiro: ";
    cin >> numero1;

    cout << "Digite o segundo número inteiro: ";
    cin >> numero2;

    if (numero1 > numero2) {
        cout << numero1 << " é maior" << endl;
    } else if (numero2 > numero1) {
        cout << numero2 << " é maior" << endl;
    } else {
        cout << "Os números são iguais" << endl;
    }

    return 0;
}