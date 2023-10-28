#include<iostream>
using namespace std;
void isVowel(){
    char c;
    cin>>c;
    if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u' || c=='A'|| c=='E' || c=='I' || c=='O' || c=='U' ){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }
}
    int main()
    {
        isVowel();
        return 0;
    }
    