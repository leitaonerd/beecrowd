#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float a, b, result;

    cin >> a >> b;
    result = (a * 3.5 + b * 7.5)/11.0;
    cout << "MEDIA = " << fixed << setprecision(5) << result << '\n';

    return 0;
}