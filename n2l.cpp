#include<iostream>
#include<vector>
using namespace std;
int fun(vector<int> &a)
{
    int n=a.size();
    int el=-1;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(c==0)
        {
            el=a[i];
            c=1;
        }else if(a[i]==el)
        {
            c++;
        }else{
            c--;
        }
    }
        int c1=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==el)
                c1++;
        }
        if(c1>(n/2))
            return el;
    return -1;
}
int main()
{
    vector<int> a={2,9,9,9,2};
    cout<<"ans="<<fun(a);
    return 0;

}





