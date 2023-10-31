#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,n; 
    cin>>n;
    long long arr[1000];
    
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(i=n; i!=0; i--){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}