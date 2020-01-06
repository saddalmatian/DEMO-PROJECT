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
    //chuyển sang 2 chiều
k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            sub_table[i][j]=change[k];
        k++;
        }
    }
//set số cho sub_table
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
            else if(j==0){
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
    
//in thử mảng phụ
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        cout<<sub_table[i][j]<<" ";
        
    }
    cout<<"\n";}

// //chọn tọa độ x,y
bool alive=true;
while(alive){
    int x,y;
    //in mảng chính
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<main_table[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"X(min=0,max="<<size-1<<"): ";cin>>x;
    cout<<"Y(min=0,max="<<size-1<<"): ";cin>>y;
    if(main_table[x][y]=='-'){
        if(sub_table[x][y]=='m')alive=false;
        else if(sub_table[x][y]!='0')
            main_table[x][y]=sub_table[x][y];
        else{
            int t1,t2;
            if(x==0 && y==0){
                
                for(t1=x;t1<x+2;t1++)
                    for(t2=y;t2<y+2;t2++)
                        main_table[t1][t2]=sub_table[t1][t2];
            }
                
            else if(x==(size-1) && y==(size-1)){
                for(t1=(x-1);t1<x+1;t1++)
                    for(t2=(y-1);t2<y+1;t2++)
                        main_table[t1][t2]=sub_table[t1][t2];
            }                      
                
            else if(x==(size-1) && y==0){
                for(t1=(x-1);t1<x+1;t1++)
                    for(t2=y;t2<y+2;t2++)
                        main_table[t1][t2]=sub_table[t1][t2];
            }

            else if(x==0 && y==(size-1)){
                for(t1=x;t1<x+2;t1++)
                    for(t2=(y-1);t2<y+1;t2++)
                        main_table[t1][t2]=sub_table[t1][t2];
            }
            else if(x==0){
                for(t1=x;t1<x+2;t1++)
                    for(t2=(y-1);t2<(y+2);t2++)
                        main_table[t1][t2]=sub_table[t1][t2];
            }
            else if(y==0){
                for(t1=(x-1);t1<(x+2);t1++)
                    for(t2=y;t2<y+2;t2++)
                        main_table[t1][t2]=sub_table[t1][t2];
            }
            else if(x!=0 && x!=(size-1) && y!=0 && y!=(size-1)){
                for(t1=(x-1);t1<(x+2);t1++)
                    for(t2=(y-1);t2<(y+2);t2++)
                        main_table[t1][t2]=sub_table[t1][t2];
            }

        }
   
    }//kết thúc điểu kiện main_table[x][y]='-'

    else cout<<"Enter again! you chose this position before !";
}
    if(alive==false)cout<<"YOU LOSE!";
}//end of int main()