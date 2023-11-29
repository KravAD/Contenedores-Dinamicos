#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numeros = {50, 12, 10, 32};
    sort(numeros.begin(), numeros.end());

for (int num : numeros) {
    cout << num << endl;
}

    return 0;
}