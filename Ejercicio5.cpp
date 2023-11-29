#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
using namespace std;
int main() {
auto cuadrado = [] (int num) {return num * num;};
cout << cuadrado(5)<< endl;

    vector<int> numeros = {1, 2, 3, 4, 5};
    for_each(numeros.begin(), numeros.end(), [](int num) {
        cout << num << endl;
    });

    shared_ptr<int> ptr(new int(10));
    cout << "Valor apuntado por ptr: " << *ptr << endl;
    return 0;
}