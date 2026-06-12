#include<iostream>
using namespace std;

int Add(int a, int b)
{
    return a+b ;
}
int Sub(int a, int b)
{
    return a-b ;
}
int Mul(int a, int b)
{
    return a*b ;
}
int Div(int a, int b)
{
    if (b != 0) {
        return a/b;
    }
    else {
        cout << "Invalid Division" << endl;
        return 0;
    }
}
int main() {
    int a,b,ch;
    cout <<"Select operation: " <<endl;
    cout <<"1: Addition " <<endl;
    cout <<"2: Subtraction " <<endl;
    cout <<"3: Multiplication " <<endl;
    cout <<"4: Division " <<endl;
    cin >> ch;
    cout <<"Enter two number: " <<endl;
    cin >> a >> b;
    switch (ch)
    {
    case 1: {
        int result = Add(a,b);
        cout <<"Reslut: "<< result << endl;
        break;
    }
    case 2: {
        int result2 = Sub(a,b);
        cout <<"Reslut: "<< result2 << endl;
        break;
    }
    case 3: {
        int result3 = Mul(a,b);
        cout <<"Reslut: "<< result3 << endl;
        break;
    }
    case 4:  {
        int result4 = Div(a,b);
        cout <<"Reslut: "<< result4 << endl;
        break;
    }
    default: {
        cout << "Invalid choice" << endl;
        break;
    }
    }
    return 0;
}