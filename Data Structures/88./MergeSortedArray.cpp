class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        int l=0,r=0;
        while(l < nums1.size()-nums2.size() && r < nums2.size()){
            if(nums1[l] < nums2[r]){
                res.push_back(nums1[l]);
                l++;
            }else{
                res.push_back(nums2[r]);
                r++;
            }
        }
        while(l < nums1.size()-nums2.size()){
            res.push_back(nums1[l]);
            l++;
        }
        while(r < nums2.size()){
            res.push_back(nums2[r]);
            r++;
        }
        nums1 = res;
    }
};
