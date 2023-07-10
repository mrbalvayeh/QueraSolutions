#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n,m;
    float bmi;
    cin>> n;
    cin >> m;

    bmi=n/(m*m);

    if(bmi<18.5)
    {
        cout <<fixed<<setprecision(2) << bmi << endl;
        cout <<"Underweight";
    }
    else if (bmi>=18.5 && bmi<25)
    {
        cout << fixed << setprecision(2) << bmi << endl;
        cout <<"Normal";
    }
    else if (bmi>=25 && bmi<30)
    {
        cout << fixed <<setprecision(2) << bmi << endl;
        cout <<"Overweight";
    }
    else if (bmi>=30)
    {
        cout << fixed <<setprecision(2) << bmi << endl;
        cout <<"Obese";
    }
    return 0;
}
