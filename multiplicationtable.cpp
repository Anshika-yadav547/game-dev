#include<iostream>
using namespace std;

int main() {
    int i,num;
    cout << "Enter number: " << endl;
    cin >> num;
    for (i=0;i<11;i++) {
        cout << num << "x" << i << "=" << num*i <<endl;
    }
    return 0;
}