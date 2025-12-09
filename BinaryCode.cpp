#include<iostream>
#include<unordered_set>
#include<math.h>
#include<vector>

using namespace std;

bool binaryCode(string s,int k)
{
    int n=s.size();
    if(n<k)
    {
        return false;
    }
    unordered_set<string>mp;

    for(int i=0;i<n-k;i++)
    {
        string sub=s.substr(i,k);
        mp.insert(sub);
    }
    return mp.size()==(1<<k);

}

int main()
{
    string s="00110110";
    int k=2;
    cout<<"Ans : "<<binaryCode(s,k);
    return 0;

}












