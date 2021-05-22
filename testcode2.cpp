#include <iostream>
using namespace std;

struct Rectangle
{
    int height;
    int length;
    Rectangle() {height = 0;length = 0;}
    Rectangle(int h,int l) : height(h),length(l) {};
    int getPerimeter() {return (height+length)*2;}

    void print()
    {
        for (int i=0;i<height;i++)
        {
            for (int j=0;j<length;j++)
                if (i==0 || j==0 || i == height-1 || j == length-1) cout << "*";
                else cout << " ";
            cout << endl;
        }
    }
};

int compare(Rectangle a, Rectangle b)
{
    if (a.getPerimeter() < b.getPerimeter()) return -1;
    if (a.getPerimeter() == b.getPerimeter()) return 0;
    else return 1;
}

int main()
{
    Rectangle a;
    a.height = 4;
    a.length = 4;
    cout << a.getPerimeter() << endl;
    a.print();
}
