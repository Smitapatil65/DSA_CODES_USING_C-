#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="abc";
    m[3]="pdpd";
    m[0]="op";
    m.insert({4,"dd"});
   /* map<int,string>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<" "<<(*it).first<<" "<<(*it).second<<endl;
    }*/
  /*  for(auto &pr:m)
    {
        cout<<" "<<pr.first<<" "<<pr.second<<endl;
    }*/

    auto it=m.find(3);
    m.erase(3);
    /*if(it==m.end())
    {
    cout<<"no val";
    }else{
    cout<<(*it).first<<" "<<(*it).second;
    }*/
    for(auto &pr:m)
    {
        cout<<" "<<pr.first<<" "<<pr.second<<endl;
    }
}














