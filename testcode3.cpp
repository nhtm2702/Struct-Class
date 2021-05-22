#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Complex
{
    int a,b;
    Complex() {a=0;b=0;}
    Complex(int _a,int _b) : a(_a),b(_b) {}
    double abs()
    {
        return sqrt(a*a+b*b);
    }

    void print()
    {
        if (a==0 && b==0) cout << 0 << endl;
        if (a!=0 && b==0) cout << a << endl;
        if (a==0 && b!=0)
        {
            if (b == 1) cout << "i" << endl;
            else if (b == -1) cout << "-i" << endl;
            else cout << b << "i" << endl;
        }
        if (a!=0 && b!=0)
        {
            cout << a;
            if (b == 1) cout << "+i" << endl;
            else if (b == -1) cout << "-i" << endl;
            else if (b>0) cout << "+" << b << "i" << endl;
            else cout << b << "i" << endl;
        }
    }
};

Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.a = a.a+b.a;
    sum.b = a.b+b.b;
    return sum;
}

int main()
{
    Complex x;
    x.a = 3;
    x.b = 4;
    x.print();
    cout << fixed << setprecision(2) << x.abs();
    return 0;
}
