#include<iostream>
#include<climits>
#include<math.h>
#include<vector>

using namespace std;

int vowels(string s,int k)
{
    int n=s.size();
    int maxC=0;
    int count1=0;

    for(int i=0;i<k;i++)
    {
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')
        {
           count1++;
        }
    }
    maxC=count1;
    for(int i=k;i<n;i++)
    {
        if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i'|| s[i-k]=='o' || s[i-k]=='u')
        {
            count1--;
        }
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
        {
            count1++;
        }
        maxC=max(maxC,count1);
    }
   return maxC;
}
int main()
{
    string s="abcabciiiiikiou";
    int k=6;
    cout<<"Ans="<<vowels(s,k);
    return 0;

}







