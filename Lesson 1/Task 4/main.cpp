#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    cout << "введите число a: ";
    cin >> a;
    cout << "введите число b: ";
    cin >> b;
    cout << "введите число c: ";
    cin >> c;
    double d = b*b - 4 * a * c;
    if (d < 0)
    {
        cout << "корней нет";
    }
    else
    if (d = 0)
    {
        double x = -b / (2*a);
        cout << "корень x = " << x;
    }
    else
    {
        double x1 = (-b-sqrt(d)) / (2 * a);
        double x2 = (-b+sqrt(d)) / (2 * a);
        cout << "корни уровнения x1 =" << x1 << ", x2 = " << x2;
    }
    return 0;
}
