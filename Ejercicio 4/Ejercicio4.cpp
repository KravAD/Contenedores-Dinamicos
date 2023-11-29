#include <iostream>
#include <valarray>
using namespace std;

int main() {
    valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};
    cout << "la suma es: " << valores.sum() << endl;
    cout << "la media es: " << valores.sum() / valores.size() << endl;

    valores +=5.0;
    cout << "Valores + 5.0" << endl;
    for(double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;

    return 0;
}