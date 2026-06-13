#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int i;
    vector<string> playername = {"Virat","Suraj","Rohit"};
    vector<int> scores = {50,60,56};
    int size = 3;
    for ( int round = 0; round < 3; round++ ) {
        int largest = 0;
        for(i = 0; i < size; i++) {
            if(scores[i] > scores[largest]) {
                largest = i;
            }
        }
        cout << "Rank " << round+1 << " : " << playername[largest] << " - " << scores[largest] << endl;
        scores[largest] = INT_MIN;
    }
return 0;
}