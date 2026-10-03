class Solution {
public:
    int findMaxLength(vector<int>& nums) {
         int maxLen = 0;
         int sum = 0;
         unordered_map<int,int>mpp;
         mpp[0] = -1;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==0){
            sum++;
           }
           else{
            sum--;
           }
        
        if(mpp.find(sum) != mpp.end()){
        int len = i - mpp[sum];
        maxLen = max(maxLen, len);
        }
        else {
    mpp[sum] = i;
}
        }
        return maxLen;
    }
};