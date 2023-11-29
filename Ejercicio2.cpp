#include <iostream>
#include <list>
#include <stack>
using namespace std;

int main() {
list<float> lista ={1.2, 2.3, 3.4};
stack<float, list<float>> pila(lista);

    return 0;
}