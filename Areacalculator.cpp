#include<iostream>
#include<cmath>
using namespace std;

int Circle(int r) 
{
    return M_PI * r * r ;
}
int Rectangle(int l, int b)
{
    return l*b ;
}
int Triangle(int l, int b, int h)
{
    return l*b*h ;
}

int main()
{
    int r,l,b,h,ch;
    cout << "Select choice: " << endl;
    cout << "1: Area of circle" << endl;
    cout << "2: Area of rectangle " << endl;
    cout << "3: Area of triangle " << endl;
    cin >> ch ;
    cout << "Enter required parameter: r,l,b,h " << endl;
    cin >> r >> l >> b >> h ;
    switch(ch)
    {
        case 1: {
            int result = Circle(r);
            cout << "Result: " << result << endl;
            break;
        }
        case 2: {
            int result = Rectangle(l,b);
            cout << "Result: " << result << endl;
            break;
        }
        case 3: {
            int result = Triangle(l,b,h);
            cout << "Result: " << result << endl;
            break;
        }
        default: {
            cout << "Invalid choice" << endl;
            break;
        }
    }
    return 0;
}