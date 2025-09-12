#include<iostream>
#include<vector>
#include<stack>
#include<cmath>
using namespace std;


 void stac(stack<int>&st,int c,int pos)
 {
     if(st.empty())return;
     if(c==pos){
        st.pop();
        return;
     }

     int top=st.top();
     st.pop();
     stac(st,c+1,pos);
     st.push(top);

 }
void st1(stack<int>&s,int si)
{
    int pos=ceil((si+1)/2.0);
    stac(s,1,pos);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"original stack";
    stack<int>tmp=s;
    while(!tmp.empty())
    {
        cout<<tmp.top() <<" ";
        tmp.pop();
    }
    cout<<endl;
    int si=s.size();
    st1(s,si);
    cout<<"after deleting";
    tmp=s;
    while(!tmp.empty())
    {
        cout<<tmp.top()<<"";
        tmp.pop();
    }
    cout << endl;

    return 0;
}





