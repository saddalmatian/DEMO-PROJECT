#include "FUNCTION/sys_command.h"
using namespace std;
int main(){
    system("cls");
    starting();
    system("cls");
    cout<<"!!!This is a demo project!!!\n";
    cout<<"Welcome to PAL!\nType -h to see basic system commands!!!\n\n\n";
    bool chat=true;              //Khởi tao chương trình
    while(chat){
    string command;
    cout <<"Your command: ";getline(std::cin,command);fflush(stdin);    //Nhập dòng lệnh
    if(command=="-x")chat=false;else{
        check_command(command);         //Kiểm tra dòng lệnh với lệnh hệ thống
                                }
    }
}