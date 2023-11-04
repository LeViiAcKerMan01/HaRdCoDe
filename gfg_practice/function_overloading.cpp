//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;



// } Driver Code Ends
//User function Template for C++


void volume(int s)
{
    // Add your code here.
    int volume = s*s*s;
    cout<<volume<<endl;
}

void volume(int r, int h)
{
    // Add your code here.
    double volume = 3.14159*r*r*h;
    cout<<volume<<endl;
    
}

void volume(int l, int b, int h)
{
    // Add your code here.
    int volume = l*b*h;
    cout<<volume<<endl;
}



//{ Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        
        switch (q)
        {
            case 1:
            int edge;
            cin>>edge;
            volume(edge);
            break;
            
            case 2:
            int radius, heigh;
            cin>>radius>>heigh;
            volume(radius, heigh);
            break;
            
            case 3:
            int length, width, height;
            cin>>length>>width>>height;
            volume(length, width, height);
            break;
            
        }
        
        
        
    }
	
	return 0;
}