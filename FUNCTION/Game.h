#include <math.h>
#include <iostream>
#include <string.h>
using namespace std;
void MineSweeper(){
    
}

void Game(){
    cout<<"Loading...";
    int select_game;
    system("cls");
    cout<<"Welcome to my game list:\n";
    cout<<"1.Minesweeper\n";
    cout<<"2.Updating...\n";
    cout<<"\n\n\nYour choice: ";cin>>select_game;
    system("cls");
    switch(select_game){
        case 1:
        MineSweeper();
        break;
        default:
        break;
    }
}