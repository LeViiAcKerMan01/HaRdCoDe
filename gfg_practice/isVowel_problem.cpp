#include <iostream>
using namespace std;
int a[200001];
int vis[200001];
int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=1;i<=n;i++){
	        vis[i]=0;
	    }
	    int ma=0;
	    int count=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(vis[a[i]]==1){
	            vis[a[i]]=0;
	            count=count-1;
	        }
	        else{
	            vis[a[i]]=1;
	            count=count+1;
	        }
	        ma=max(ma,count);
	    }
	    cout<<ma<<endl;
	}
	return 0;
}
