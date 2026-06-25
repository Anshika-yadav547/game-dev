// Given an array of integers and a target number, find two numbers that add up to the target. Return their indices.


#include<iostream>
using namespace std;

int main() {
    int nums[4] = {2,7,11,15};
    int target = 9;
    for(int i = 0; i < 4; i++) {
        for(int n = i + 1; n < 4; n++) {
            if(nums[i] + nums[n] == target) {
               cout << nums[i] <<"+" << nums[n] << "=" << target << endl;
               cout << i <<"," << n << endl;
            }
        }
    }
    return 0;
}