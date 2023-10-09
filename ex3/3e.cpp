#include <iostream>

using namespace std;

int main() {
    char ch1, ch3;

    cout << "Digite um caractere: ";
    cin >> ch1;

    ch3 = (isupper(ch1)) ? 'A' : ' ';

    cout << "O valor de ch3 é: " << ch3 << endl;

    return 0;
}