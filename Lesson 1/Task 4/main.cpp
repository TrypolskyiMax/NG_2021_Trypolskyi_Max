#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    double d = b*b - 4 * a * c;
    if (d < 0)
    {
        cout << "no roots";
    }
    else
    if (d = 0)
    {
        double x = -b / (2*a);
        cout << "x = " << x;
    }
    else
    {
        double x1 = (-b-sqrt(d)) / (2 * a);
        double x2 = (-b+sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << ", x2 = " << x2;
    }
    return 0;
}
