//structure -use to store non-similar data type//Q38 -gfg
#include<iostream>
#include<vector>
using namespace std;
struct student
{
    string nm;
    string rn;
    vector<string> sub;
    vector<int> mk;
    float cgpa;
};
template<typename S>void printv(const vector<S>& v )//const vector<S>& v-constant reference to std::vector of type S
{
    cout<<"[";
    for(auto elem:v)
    {
      cout<<elem<<" ";
    }
    cout<<"]";
    cout<<endl;
}
void printstudent(student* s)
{
    cout<<"student details"<<endl;
    cout<<"student nm:"<<s->nm<<endl;
    cout<<"student sub:";
    printv(s->sub);
    cout<<"student marks:";
    printv(s->mk);
    cout<<"student cgpa:"<<s->cgpa<<endl;
}
int main()
{
 student s;
 s.nm="ram";
 s.rn="1";
 s.sub={"ds","c++","python"};
 s.mk={99,98,89};
 s.cgpa=8.918;
 printstudent(&s);
   return 0;
}
