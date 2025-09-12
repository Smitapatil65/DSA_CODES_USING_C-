#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isa(string s,string t)
{
    vector<int> c(26,0);
    for(char &ch:s)
    {
        c[ch-'a']++;
    }
     for(char &ch:t)
    {
        c[ch-'a']--;
    }
    bool a=all_of(begin(c),end(c),[](int element){
                  return element==0;
                  });
    return a;
}
int main()
{ string s="cat",t="tac";
  cout<<"res="<<isa(s,t);
  return 0;
}






