#include <iostream>
#include <cmath>

using namespace std;

float kat;
const float pi = 3.14159265359;

int main()
{
    cout << "Podaj wartosci kata: ";
    cin >> kat;

    // funkcja sinus(radiany)
    cout <<   "sin(): " <<   sin(kat*pi/180) << endl;  // zamiana ze stopni na radiany
    cout <<   "cos(): " <<   cos(kat*pi/180) << endl;
    cout <<   "tan(): " <<   tan(kat*pi/180) << endl;
    cout << "1/tan(): " << 1/tan(kat*pi/180) << endl;

    return 0;
}
