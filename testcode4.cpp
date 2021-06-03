#include <iostream>

using namespace std;

struct Time {
    int h,m,s;
    Time() : h(0),m(0),s(0) {}
    Time(int _h,int _m,int _s)
    {
        if (_h > 0) h = _h;
        else h = 0;
        if (_m > 0) m = _m;
        else m = 0;
        if (_s > 0) s = _s;
        else s = 0;
    }

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
    int nho = 0;
    if (s == 60)
    {
        result.s = 0;
        nho = 1;
    }
    else result.s = s;
    m += nho;nho = 0;
    if (m == 60)
    {
        result.m = 0;
        nho = 1;
    }
    else result.m = m;
    h += nho;
    if (h == 24) result.h = 0;
    else result.h = h;
    return result;
}

int main()
{
    Time a(0,-1,0);
    cout << a.h << " " << a.m << " " << a.s;
}
