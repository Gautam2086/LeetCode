class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4)    
    {
        int ans= 0;
        unordered_map<int, int> mp;
        
        for(int a: nums1) {
            for(int b: nums2) {
                mp[a+b]++;
            } 
        }
        
            for(int c: nums3)
                for(int d: nums4)
                    if(mp.count(-(c+d)) && mp[-(c+d)]>0)
                        ans += mp[-(c+d)];
        
        return ans;
    }
};