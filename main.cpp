#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double C;
    double F;

    cin >> C;

    F = (9 / 5.0) * C + 32;

    cout << setprecision(2) << fixed;
    
    cout << "Celcius " << C << " is " << F << " Fahrenhiet" << endl;

    return 0;
}