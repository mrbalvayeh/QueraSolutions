#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b, c, d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    float sum = a + b + c + d;
    float avg = (a + b + c + d) / 4;
    float product = a * b * c * d;
    float max = a > b ? (a > c ? (a > d ? a : d) : (c > d ? c : d)) :
                (b > c ? (b > d ? b : d) : (c > d ? c : d));
    float min = a < b ? (a < c ? (a < d ? a : d) : (c < d ? c : d)) :
                (b < c ? (b < d ? b : d) : (c < d ? c : d));

    cout << "Sum : " << fixed << setprecision(6) << sum << endl;
    cout << "Average : " << fixed << setprecision(6) << avg << endl;
    cout << "Product : " << fixed << setprecision(6) << product << endl;
    cout << "MAX : " << fixed << setprecision(6) << max << endl;
    cout << "MIN : " << fixed << setprecision(6) << min << endl;

    return 0;
}
