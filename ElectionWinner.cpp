#include<iostream>
#include<unordered_map>
#include<math.h>
#include<vector>

using namespace std;

vector<string> votes(string a[],int n)
{

    unordered_map<string,int>mp;

    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }

    string nm="";
    int max_vo=0;


    for(auto k=mp.begin();k!=mp.end();k++)
    {
       string key=k->first;
       int val=k->second;

       if(val>max_vo)
       {
           max_vo=val;
           nm=key;
       }else if(val==max_vo)
       {
           if(key<nm)
             nm=key;
       }
    }
    vector<string>ans;
    ans.push_back(nm);

    string tmp=to_string(max_vo);

    ans.push_back(tmp);

    return ans;

}
int main()
{
    string a[]={"andy","blake","clark"};
    int n=3;

    vector<string> result = votes(a, n);

    cout << "Winner: " << result[0] << endl;
    cout << "Votes: " << result[1] << endl;


    return 0;

}







