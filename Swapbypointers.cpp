#include<iostream>
using namespace std;

int swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int main() {
    int x = 5;
    int y = 10;
    swap(&x,&y);
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    return 0;
}
    