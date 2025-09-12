#include<iostream>
#include<string>
using namespace std;
class alarm{
 public:
     tm alarmtime,presenttime,difftime;
     time_t now;
     alarm()
     {
         now=time(0);
         presenttime=*localtime(&now);
         alarmtime=presenttime;
         alarmtime.tm_sec=0;
     }
     void getTime()
     {
         string time;
         cout<<"Enter Alarm time in 24 hour format[HH:MM]";
         getline(cin,time);
         int pos=0,h;
         while((pos=time.find(':'))!=string::npos)
         {
             string token=time.substr(0,pos);
             stringstream convert(token);
             convert>>alarmtime.tm_hour;
             time.erase(0,pos+1);
         }
         stringstream convert(time);
         convert>>alarmtime.tm_min;
     }





};
