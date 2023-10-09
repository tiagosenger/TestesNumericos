#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    char ch2, ch3;

    cout << "Digite um caractere: ";
    cin >> ch2;

    ch3 = (islower(ch2)) ? 'a' : ' ';

    cout << "O valor de ch3 é: " << ch3 << endl;

    return 0;
}