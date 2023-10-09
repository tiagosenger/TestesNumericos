#include <iostream>

using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Digite o primeiro caractere: ";
    cin >> ch1;

    ch2 = ch1 + 1;

    ch3 = ch1 - 1;

    cout << "Valor de ch1: " << ch1 << endl;
    cout << "Valor de ch2: " << ch2 << endl;
    cout << "Valor de ch3: " << ch3 << endl;

    return 0;
}