class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int len=f.size();
        for(int i=0;i<len;i++){
            if((i==0 || f[i-1]==0) && (f[i]==0) && (i==len-1 || f[i+1]==0)){
                f[i]=1;
                n--;
            }
        }
        return n<=0;
    }
};
