#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
using namespace std;

int main(){
    system("cls");
    int size,mine;             
    cout<<"Input size: ";cin>>size;
    cout<<"Input mine: ";cin>>mine;
    char main_table[size][size],sub_table[size][size];
    for(int i=0;i<size;i++)
    for(int j=0;j<size;j++){
        main_table[i][j]='-';
        sub_table[i][j]='-';
    }
    int change[size*size];
    //Chuyển sang 1 chiều
    int k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            change[k]=main_table[i][j];
            k++;
        }
    }
    
}