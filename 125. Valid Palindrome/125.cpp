class Solution {
public:
    bool f(int i, vector<char>&a, int n){
        if(i>=n/2) return true;
        if(a[i]!=a[n-i-1]) return false;
        return f(i+1, a, n);
    }
    bool isPalindrome(string s) {
        vector <char> a;

        for(auto c:s){
            if(isalnum(c)){
                a.push_back(tolower(c));
            }
        }
        int n=a.size();
        return f(0,a,n);
    }
};
