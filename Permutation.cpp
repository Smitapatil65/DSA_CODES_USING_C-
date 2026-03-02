#include<iostream>
#include<unordered_map>
#include<math.h>
#include<vector>

using namespace std;


bool permutation(string s1,string s2)
{
    unordered_map<char,int>mp1,mp2;
    if(s1.size()>s2.size())return false;

    for(char i:s1)
    {
        mp1[i]++;
    }

    int k=s1.size();

    for(int i=0;i<k;i++)
    {
      mp2[s2[i]]++;
    }

    if(mp1==mp2)
        return true;

    for(int i=k;i<s2.size();i++)
    {
        mp2[s2[i]]++;
        mp2[s2[i-k]]--;

        if(mp2[s2[i-k]]==0)
         {
            mp2.erase(s2[i-k]);
         }
         if(mp1==mp2)
         {
             return true;
         }

    }
    return false;

}
int main()
{
    string s1="ab";
    string s2="vdfdbadd";
    cout<<"Ans="<<permutation(s1,s2);
    return 0;
}








