class Solution {
public:
    int trap(vector<int>& height) {
         int n=height.size();
        if(n==0)
            return 0;
        int dp[n],val=0;
        for(int i=0;i<n;i++){
            val=max(val,height[i]);
            dp[i]=val;
        }
        val=0;
        for(int i=n-1;i>=0;i--){
            val=max(val,height[i]);
            dp[i]=min(dp[i],val);
        }
        val=0;
        for(int i=0;i<n;i++)
            val+=dp[i]-height[i];
        return val;
    }
};