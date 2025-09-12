#include <bits/stdc++.h>//This header includes all standard C++ libraries (e.g., for strings, streams, vectors, etc.).
using namespace std;

// A quick way to split strings separated via spaces.
void simple_tokenizer(string s)
{
    stringstream ss(s);//stringstream treat a string like a stream//it creates ss as a obj and initializes it with the string s
    string word;
    while (ss >> word) {// >> extraction operator-read until space occur
        cout << word << endl;
    }
}
//it handlle command line argument// argument count , actual content of argument
int main(int argc, char const* argv[])//argc -argument count-repersent no.of argum. passed to program via command line char const* argv[]-argument vector-array of c-style string
{
    string a="i am girl";
   // cout<<"enter a string";
    //cin>>a;
    // Takes only space separated C++ strings.
    simple_tokenizer(a);
    cout << endl;
    return 0;
}
