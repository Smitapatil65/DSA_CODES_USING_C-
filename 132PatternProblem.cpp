#include<iostream>
#include<stack>
#include<math.h>
#include<vector>

using namespace std;


bool p132pattern(vector<int> &nums)
{
    int n=nums.size();
    stack<int>st;
    int k=INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
        if(nums[i] < k)
            return true;
        while(!st.empty() && st.top()<nums[i])
        {
            k=st.top();
            st.pop();
        }
        st.push(nums[i]);
    }
    return false;
}
int main()
{
    vector<int>arr={-1,3,2,0};
    cout<<"ANS="<<p132pattern(arr);
    return 0;
}










