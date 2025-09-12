#include <iostream>
#include <vector>
using namespace std;

bool fun(string s1,string s2)
{
    if(s1.size()!=s2.size()) return false;

    string con=s1+s1;
    int ind=con.find(s2);
    if(ind==-1)
    {
        return false;
    }
    return true;
}
int main()
{
    string s1="abc";
    string s2="bca";
    cout<<"Ans="<<fun(s1,s2);
    return 0;

}
