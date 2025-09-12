#include<iostream>
#include<fstream>
using namespace std;
class tmp{
string un,e,pass;
fstream f;
public:
    void login();
    void sign();
    void forget();
}obj;

int main()
{
   char ch;
   cout<<"\n 1-login";
      cout<<"\n 2-sign";
        cout<<"\n 3-forgot pass";
          cout<<"\n 4-exit";
          cout<<"enter ch";
          cin>>ch;
          switch(ch)
          {
            case '1':
            break;
            case '2':
            break;
            case '3':
            break;
            case '4':
            break;
            default:cout<<"invalid";
          }

}
void tmp::sign(){
cout<<"enter name"<<endl;
getline(cin,un);
cout<<"enter email"<<endl;
getline(cin,e);
cout<<"enter password"<<endl;
getline(cin,p);

file.open("login.txt",ios::out|ios::app);
file<<un<<"*"<<e<<"*"<<pass<<endl;
file.close();

}
void tmp::login()
{ string sn,sp;
  cout<<"--------LOGIN----------"<<endl;
  cout<<"enter user name"<<endl;
  getline(cin,sn);
  cout<<"enter user password"<<endl;
  getline(cin,sp);

  file.open("")


}

