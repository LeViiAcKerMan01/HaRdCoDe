#include <iostream>
#include <string>
#include<cmath>

using namespace std;

int main() {
    // Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    string c=a+b;
    char f=a[0];
    char g=b[0];
    
    
    int d= a.length();
    int e= b.length();
    
    string h=a.substr(1,d);
    string i=b.substr(1,e);
    
    cout<<d<<" "<<e<<"\n";
    cout<<c<<"\n";
    cout<<g<<h<<" "<<f<<i;
    
 
    
    return 0;
}