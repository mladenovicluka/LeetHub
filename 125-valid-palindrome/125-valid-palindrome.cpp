class Solution {
public:
    bool isPalindrome(string s) {
        string curr="";
        for(auto x:s)
        {
            if(x>='a'&&x<='z')curr+=x;
               else if(x>='A' && x<='Z')curr+=tolower(x);
            else if(x>='0'&& x<='9')curr+=x;
        }
        for(int i=0;i<curr.size()/2;i++)
        {
            if(curr[i]!=curr[curr.size()-i-1])return false;
        }
        return true;
        
    }
};