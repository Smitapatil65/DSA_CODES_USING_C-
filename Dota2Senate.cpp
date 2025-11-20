#include<iostream>
#include<queue>
#include<math.h>
#include<vector>

using namespace std;

string pp(string senate)
{
    int n=senate.size();
    queue<int> rad,dir;
    for(int i=0;i<n;i++)
    {
        if(senate[i]=='R')
        {
        rad.push(i);
        }else{
        dir.push(i);
        }
    }
    if(dir.size()==0)
    {
       return "Radiant";
    }else if(rad.size()==0)
    {
        return "Dire";
    }

    while(!rad.empty() && !dir.empty())
    {
        if(rad.front() < dir.front())
        {
            dir.pop();
            int r=rad.front();
            rad.push(r+n);
            rad.pop();
        }else{
          rad.pop();
          int d=dir.front();
          dir.push(d+n);
          dir.pop();
        }

    }
    return rad.size()==0? "Dire":"Radiant";
}
int main()
{

    cout<<"Winner="<<pp("RRDDRRD");
    return 0;
}














