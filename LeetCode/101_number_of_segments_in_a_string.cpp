class Solution{
    int CountSegments(string s){
        stringstream ss(s);
        string word;
        int count;
        while(ss>>word){
            count+=1;
        }
        return count;
    }
};