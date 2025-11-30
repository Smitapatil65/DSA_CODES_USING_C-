#include<iostream>
#include<deque>
#include<math.h>
#include<vector>

using namespace std;

int josh(int n,int k)
{
    deque<int> q;
    for(int i=1;i<=n;i++)
    {
        q.push_back(i);
    }
    while(q.size()>1)
    {
         for(int i=1;i<k;i++)
         {
             q.push_back(q.front());
             q.pop_front();
         }
         q.pop_front();
    }
    return q.front();
}
int main()
{  int n=5,k=2;
   cout<<"ans="<<josh(n,k);
   return 0;

}



