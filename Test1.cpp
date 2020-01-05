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
    char change[size*size];
    //Chuyển sang 1 chiều
    int k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            change[k]=main_table[i][j];
            k++;
        }
    }
 
    srand(time(NULL));
    for(int d=0;d<mine;d++){
int x = rand() % (size*size)-1 + 1;
    change[x]='m';
    }
       int dem=0;    
   while(dem!=mine){
       
       for(int d=0;d<size*size;d++){
           if(change[d]=='m')
           dem++;
       }
       if(dem!=mine){
        int x = rand() % (size*size)-1 + 1;
        change[x]='m';
           dem=0;
       }
   }
//chuyen sang 2 chieu
k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            sub_table[i][j]=change[k];
        k++;
        }
    }



for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        cout<<sub_table[i][j]<<" ";
    }
    cout<<"\n";
}

}//end of int main()