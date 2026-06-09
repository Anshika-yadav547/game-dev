#include<iostream>
#include<string>

using  namespace std;

int main() {
    string Name;
    int age;
    float Salary;
    cout << "Enter your Name: ";
    cin >> Name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your salary: ";
    cin >> Salary;
    cout<< "Name: "<< Name << "\nage: "<< age << "\nSalary: " << Salary;
    return 0;
}