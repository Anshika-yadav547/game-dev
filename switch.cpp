#include<iostream>
using namespace std;

int main() {
    int ch;
    cout <<"Enter choice: " <<endl;
    cout << "choice 1: Red house" <<endl;
    cout << "choice 2: Blue house" <<endl;
    cout << "choice 3: Green house" <<endl;
    cout << "choice 4: Yellow house" <<endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout <<"Your house is Red"<<endl;
        break;
    case 2:
        cout <<"Your house is Blue"<<endl;
        break;
    case 3:
        cout <<"Your house is Green"<<endl;
        break;
    case 4:
        cout <<"Your house is Yellow"<<endl;
        break;
    default:
        break;
    }
    return 0;
}