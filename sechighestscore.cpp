#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> scores = {45, 89, 23, 12, 67};
    int largest  = 0;
    for (int i = 0; i < scores.size(); i++) 
    {
        if(scores[i] > scores[largest]) {
            largest = i;
        }
    }
    cout << "Max found: " << scores[largest] << endl;
    scores[largest] = INT_MIN;
    for(int i = 0; i < scores.size(); i++) {
        cout << scores[i] << endl;
    }
    for (int i = 0; i < scores.size(); i++) 
    {
        if(scores[i] > scores[largest]) {
           largest = i;
        }
    }
     cout << "Second highest number: " << scores[largest] << endl;
    return 0;
}