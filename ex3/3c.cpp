#include <iostream>

using namespace std;

int main() {
    char ch1, ch3;
    
    cout << "Digite um caractere: ";
    cin >> ch1;
    
    ch3 = ch1 - 1;

    if (!isprint(ch3)) {
        ch3 = '_';
    }

    cout << "Caractere em formato decimal: " << int(ch3) << endl;
    cout << "Caractere em formato octal: " << oct << int(ch3) << endl;
    cout << "Caractere em formato hexadecimal: " << hex << int(ch3) << endl;
    cout << "Caractere: " << ch3 << endl;

    return 0;
}