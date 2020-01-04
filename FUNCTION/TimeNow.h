#include <iostream>
#include <ctime>
using namespace std;
void DayTime(){                         //Hàm hiển thị thời gian
    time_t now = time(0);
    tm * tml = localtime(&now);
    cout<<"Current Time: hh:mm:ss  \t"<< tml->tm_hour <<":" << tml->tm_min << ":" << tml->tm_sec << endl;
    cout<<"Current Date: dd:mm:yyyy\t"<< tml->tm_mday << "/" << 1 + tml->tm_mon << "/" << 1900 + tml->tm_year << endl;
}