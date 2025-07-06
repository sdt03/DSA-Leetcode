class Solution {
public:
    int numTrees(int n) {
        int Trees=0;
        if(n<=1)
            return 1;
        else{
        for(int i=1;i<=n;i++)
            Trees += numTrees(i-1)*numTrees(n-i);
        return Trees;   
    }
    }
};
