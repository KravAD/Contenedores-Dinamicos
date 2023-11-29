#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int> numeros = {10, 3, 40};
for(vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
    cout << *it << endl;
}

    return 0;
}