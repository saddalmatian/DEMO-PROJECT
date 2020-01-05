#include <string.h>
#include <iostream>
#include <cstdlib>
#include "random.h"
#include <windows.h>
#include "TimeNow.h"
#include "Game.h"
using namespace std;
void show_syscommand(){                     //Hàm hiển thị dòng lệnh hệ thống
    system("cls");
    cout<<"This is list of system command: \n";
    cout<<"-h: to see basic help\n";
    cout<<"-x: exit program\n";
    cout<<"-s: show all the system command\n";
    cout<<"-t: show the current time\n";
    cout<<"-r: random numbers\n";
}
void check_command(string a){               //Hàm kiểm tra dòng lệnh nhập
    if (a=="-h"){cout<<"-h: to see basic help\n";
    cout<<"-x: exit program\n";
    cout<<"-s: show all the system command\n";}
    if (a=="-s")show_syscommand();
    if (a=="-t")DayTime();
    if (a=="-g")Game();
    if (a=="-r")Random();
}   
void starting(){                            //Hàm khởi động
    cout<<"System starting...\n";
    for(int i=0;i<100;i++){
        Sleep(30);
        cout<<"-";}
        cout<<"\nDONE!";
        Sleep(2000);
}

  