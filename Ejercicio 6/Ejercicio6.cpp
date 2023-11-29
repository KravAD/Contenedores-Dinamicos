#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>
using namespace std;

int main() {
    string cadena = "cadena";

    try{
        int i = boost::lexical_cast<int> (cadena);
        cout << "numero: " << i << endl;
    }
    catch (boost::bad lexical_cast &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

