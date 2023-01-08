class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int left=0,right=0;
        int n1=nums1.size(),n2=nums2.size();
        bool isEven = (n1+n2) %2 == 0;
        vector<int> res;
        while(left < n1 && right < n2){
            if(nums1[left]<nums2[right]){
                res.push_back(nums1[left]);
                left++;
            }else{
                res.push_back(nums2[right]);
                right++;
            }
        }
        while(left<n1){
            res.push_back(nums1[left]);
            left++;
        }
        while(right<n2){
            res.push_back(nums2[right]);
            right++;
        }
        int median = (n1+n2)/2;
        if(isEven){
            return (res[median]+res[median-1])/2.0;
        }else{
            return res[median];
        }
    }
};
