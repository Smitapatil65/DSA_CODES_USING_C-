#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
string getPassword(int len)
{  string pas="";
   string chara="aquickbrownfoxjumpsoverthelazydogAQUICKBROWNFOXJUMPSOVERTHELAZYFOX0123456789";
   int charsize=chara.size();
   srand(time(0));
   int ri;//This seeds the random number generator with the current time, ensuring the randomness of the output each time the program runs.
   for(int i=0;i<len;i++)
   {
       ri=rand()%charsize;
       pas=pas+chara[ri];
   }
    return pas;
}
int main()
{
    int len;
    cout<<"enter length of password::";
    cin>>len;
    string pass=getPassword(len);
    cout<<"genrated password::"<<pass;
    return 0;

}


