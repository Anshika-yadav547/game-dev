#include<iostream>
using namespace std;

int main() {
    int i,num;
    for (  num = 0; num < 51; num++)
    {
        cout << num << endl;
    }
    
    cout << "Enter number (1 - 50): " << endl;
    cin >> i;
    if (i % 3 == 0) {
        cout << "Fizz" << endl;
    }
    else if (i % 5 == 0) {
        cout << "Buzz" << endl;
    }
    else if (i % 15 == 0) {
        cout << "FizzBuzz" << endl;
    }
    return 0;
}