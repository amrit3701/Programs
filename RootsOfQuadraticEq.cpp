#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "The equation should be in form ax^2 + bx + c = 0" << endl;
    float a,b,c;
    cout << "Enter the value of a = ";
    cin >> a;

    cout << "Enter the value of b = ";
    cin >> b;

    cout << "Enter the value of c = ";
    cin >> c;
    cout << "The given equation is " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

    float d,x1,x2,real,img;
    d = b*b - 4*a*c;

    if (d>0)
    {
        cout << "Roots are different and real." << endl;
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        cout << "x1 = " << x1 << endl << "x2 = "<< x2 <<endl;
    }

    else if (d == 0)
    {
        cout << "Roots are real and same. " << endl;
        x1 = (-b) / (2*a);
        cout << "x1 = x2 = " << x1 << endl;
    }

    else
    {
        cout << "Roots are different and imaginary." << endl;
        real = -b/(2*a);
        img = sqrt(-d)/(2*a);

        cout << "x1 = " << real << "+" << img << "i" << endl;
        cout << "x2 = " << real << "-" << img << "i" << endl;
    }

    return 0;
}
