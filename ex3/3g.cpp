#include <iostream>
#include <cctype> // Para a função isdigit

using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Digite o primeiro caractere: ";
    cin >> ch1;
    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';

    cout << "O valor de ch3 é: " << ch3 << endl;

    return 0;
}