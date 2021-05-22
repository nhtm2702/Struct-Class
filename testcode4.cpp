#include <iostream>

using namespace std;

struct Time {
    int h,m,s;
    Time() : h(0),m(0),s(0) {}
    Time(int _h,int _m,int _s) : h(_h),m(_m),s(_s) {}

    int second() {
        return h*3600+m*60+s;
    }

    void print()
    {
        if (h<10) cout << "0" << h << ":";
        else cout << h << ":";
        if (m<10) cout << "0" << m << ":";
        else cout << m << ":";
        if (s<10) cout << "0" << s << endl;
        else cout << s << endl;
    }
};

Time normalize(int h, int m, int s)
{
    Time result;
    if (s == 60)
    {
        result.s = 0;
        if (m < 59) result.m = m+1;
        else
        {
            result.m = 0;
            if (h < 23) result.h = h+1;
            else result.h=0;
        }
    }
    return result;
}

int main()
{
    normalize(23, 59, 60).print();
}
