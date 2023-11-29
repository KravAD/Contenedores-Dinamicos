#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numeros = {50, 12, 100,32};
    sort(numeros.begin(), numeros.end());

for (int num : numeros) {
    cout << num << endl;
}
int maxNum = *max_element(numeros.begin(), numeros.end());
cout << "El numero maximo es: " << maxNum << endl;
    return 0;
}