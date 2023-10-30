#include<iostream>
#include<string> 
using namespace std;

string conCat( string s1, string s2){
    string concat=s1+s2;
    return concat;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<conCat(s1, s2)<<endl;

    }
    return 0;
}
