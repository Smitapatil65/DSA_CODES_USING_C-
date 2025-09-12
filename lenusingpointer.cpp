//find the length of string using pointer
#include<iostream>
using namespace std;
#define max 8
int main()
{
    char text[max];
    char *str=text;
    int count=0;
    cout<<"enter string"<<endl;
    cin>>text;

    while (*(str++) !='\0')
    {count++;}

    cout<<"len="<<text<<endl;
    cout<<"size="<<count;


}

