class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a="";
        string b="";
        for(int i=0;i<word1.size();i++){
            a=a+word1[i];
        }
        for(int i=0;i<word2.size();i++){
            b=b+word2[i];
        }
        if(a==b){
            return true;
        }
        else{
            return false;
        }
        return false;
    }
};
