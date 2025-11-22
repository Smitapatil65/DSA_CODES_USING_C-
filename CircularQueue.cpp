#include<iostream>
#include<climits>
#include<math.h>
#include<vector>

using namespace std;

class cir
{
    int * arr;
    int cs,cap;
    int f,r;

public:
    cir(int si)
    {
        cap=si;
        arr=new int(cap);
        f=0;
        cs=0;
        r=-1;
    }
    void push(int data)
    {
        if(cs==cap)
            {cout<<"CQ is full";
            return;}
        r=(r+1)%cap;
        arr[r]=data;
        cs++;

    }
    void pop()
    {
        if(empty())
        {
            cout<<"CQ is empty";
            return;
        }
        f=(f+1)%cap;
        cs--;

    }
    int front()
    {    if(empty())
        {
            cout<<"CQ is empty";
            return -1;
        }
        return arr[f];
    }
    bool empty()
    {
        return cs==0;

    }
   void print()
   {
       for(int i=0;i<cap;i++)
       {
           cout<<arr[i]<<"";
       }
       cout<<endl;
   }
};
int main()
{

    cir cc(3);
    cc.push(1);
    cc.push(2);
    cc.pop();
    cc.push(1);
   cc.print();
return 0;

}
