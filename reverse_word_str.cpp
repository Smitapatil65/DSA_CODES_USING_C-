#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string rev(string s)
{
    int n=s.size();
    string ans="";
    reverse(s.begin(),s.end());

    for(int i=0;i<n;i++)
    {
        string word="";
        while(i<n && s[i] != ' ')
        {
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.size()>0)
            ans+=" "+word;
    }
    return ans;

}
int main()
{

    string s="I Like Cats.";
    cout<<"Reverse String is="<<rev(s);
    return 0;
}
