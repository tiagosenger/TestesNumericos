#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char ch2, ch3;
    
    cout << "Digite um caractere: ";
    cin >> ch2;
    
    ch3 = ch2 - 1;

    if (!isprint(ch3)) {
        ch3 = '_';
    }

    printf("Caractere em formato decimal: %d\n", int(ch3));
    printf("Caractere em formato octal: %o\n", int(ch3));
    printf("Caractere em formato hexadecimal: %x\n", int(ch3));
    printf("Caractere: %c\n", ch3);

    return 0;
}