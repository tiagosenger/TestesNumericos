#include <iostream>

using namespace std;

int main() {
    double x, y, z;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    cout << "Digite o valor de z: ";
    cin >> z;

    double media = (x + y + z) / 3.0;

    cout << "A média dos números é: " << media << endl;

    return 0;
}