#include<iostream>
using namespace std;
int main() {
    char board[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = '-';
        }
    }
    cout << "Board" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    int row, col;
    for (int round = 0; round < 9; round++) {
        if(round%2 == 0) {
            cout << "Player 1 enter row and column (0-2)" << endl;
            cin >> row >> col;
            board[row][col] = 'X';
            cout << "New Board" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    if(board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] != '-') {
        cout << "Player 1 wins!!" << endl;
        break;
    }
    if(board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] != '-') {
        cout << "Player 1 wins!!" << endl;
        break;
    }
    if(board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] != '-') {
        cout << "Player 1 wins!!" << endl;
        break;
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-') {
        cout << "Player 1 wins!!" << endl;
        break;
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-') {
        cout << "Player 1 wins!!" << endl;
        break;
    }
        }
        else {
           cout << "Player 2 enter row and column (0-2)" << endl;
            cin >> row >> col;
            board[row][col] = 'O';
            cout << "New Board" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    } 
        }
    if(board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] != '-') {
        cout << "Player 2 wins!!" << endl;
        break;
    }
    if(board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] != '-') {
        cout << "Player 2 wins!!" << endl;
        break;
    }
    if(board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] != '-') {
        cout << "Player 2 wins!!" << endl;
        break;
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != '-') {
        cout << "Player 2 wins!!" << endl;
        break;
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != '-') {
        cout << "Player 2 wins!!" << endl;
        break;
    }
    }
}