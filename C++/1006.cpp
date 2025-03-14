#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float a, b, c, result;

    cin >> a >> b >> c;
    result = (a * 2.0 + b * 3.0 + c * 5.0)/10.0;
    cout << "MEDIA = " << fixed << setprecision(1) << result << '\n';

    return 0;
}