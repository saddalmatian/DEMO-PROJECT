#include <math.h>
#include <time.h>
#include <stdlib.h>
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
 //set mine
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
//in truoc khi set so
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        cout<<sub_table[i][j]<<" ";
        
    }
    cout<<"\n";
}
//set so cho sub_table
for(int i=0;i<size;i++)
     for(int j=0;j<size;j++){
            int t1,t2;
            int dem=0;
             if(sub_table[i][j]=='-'){
            if(i==0 && j==0){
                for(t1=i;t1<i+2;t1++)
                    for(t2=j;t2<j+2;t2++)
                        if(sub_table[t1][t2]=='m')dem++;
            }
                
            else if(i==(size-1) && j==(size-1)){
                for(t1=(i-1);t1<i+1;t1++)
                    for(t2=(j-1);t2<j+1;t2++)
                        if(sub_table[t1][t2]=='m')dem++;
            }                      
                
            else if(i==(size-1) && j==0){
                for(t1=(i-1);t1<i+1;t1++)
                    for(t2=j;t2<j+2;t2++)
                        if(sub_table[t1][t2]=='m')dem++;
            }

            else if(i==0 && j==(size-1)){
                for(t1=i;t1<i+2;t1++)
                    for(t2=(j-1);t2<j+1;t2++)
                        if(sub_table[t1][t2]=='m')dem++;
            }
            else if(i==0){
                for(t1=i;t1<i+2;t1++)
                    for(t2=(j-1);t2<(j+2);t2++)
                        if(sub_table[t1][t2]=='m')dem++;
            }
             if(j==0){
                for(t1=(i-1);t1<(i+2);t1++)
                    for(t2=j;t2<j+2;t2++)
                        if(sub_table[t1][t2]=='m')dem++;
            }
            else if(i!=0 && i!=(size-1) && j!=0 && j!=(size-1)){
                for(t1=(i-1);t1<(i+2);t1++)
                    for(t2=(j-1);t2<(j+2);t2++)
                        if(sub_table[t1][t2]=='m')dem++;
            }   

                           
                 switch(dem){
                    case 0:
                    sub_table[i][j]='0';
                    break;
                    case 1:
                    sub_table[i][j]='1';
                    break;
                    case 2:
                    sub_table[i][j]='2';
                    break;
                    case 3:
                    sub_table[i][j]='3';
                    break;
                    case 4:
                    sub_table[i][j]='4';
                    break;
                    case 5:
                    sub_table[i][j]='5';
                    break;
                    case 6:
                    sub_table[i][j]='6';
                    break;
                    case 7:
                    sub_table[i][j]='7';
                    break;
                    case 8:
                    sub_table[i][j]='8';
                    break;
                    default:
                    break;
                 }
                        }
                 
                 }     
    

//khó vl
//in sau khi set so
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        cout<<sub_table[i][j]<<" ";
        
    }
    cout<<"\n";
}

}//end of int main()