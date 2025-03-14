#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    const double PI = 3.14159;
    double raio, resultado;

    cin >> raio;
    resultado = raio*raio*PI;

    cout << "A=" << fixed << setprecision(4) << resultado << '\n';

    return 0;
}