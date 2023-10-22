#include<iostream>
using namespace std;
void isVowel(){
    char c;
    cin>>c;
    if(c=='a'|| c=='e' || c=='i' || c=='O' || c=='u'){
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
    