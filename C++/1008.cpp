#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float nfunc, horast, valorh;

    cin >> nfunc >> horast >> valorh;
    cout << "NUMBER = " << nfunc << '\n';
    cout << "SALARY = U$ " << fixed << setprecision(2) << horast*valorh << '\n';

    return 0;
}