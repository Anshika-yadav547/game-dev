#include<iostream>
#include<cstdlib> // for rand()
#include<ctime>   // for time()
using namespace std;

int main()
{
    srand(time(0));    //set random seed
    int secret = rand() % 100 + 1;  //pick number 1-100
    int guess = 0;
    int attempt = 0;
    
    while(guess != secret) {
        cout << "Guess a number (1-100): " << endl;
        cin >> guess;
        attempt++;

    if (guess < secret)
    {
        cout << "Too Low" << endl;
    }
    else if (guess > secret)
    {
        cout << "Too High" << endl;
    }
}
cout << "Correct! You got it in " << attempt << " guesses!" << endl;
return 0;
}