class Solution {
public:
    int firstBadVersion(int n) {
        int mid = n;
         mid /=2;
         if(isBadVersion(mid)){
            while(isBadVersion(mid-1)){
                 mid--;
            }
        }else{
            while(!isBadVersion(mid)){
                mid++;
            }
        }
        return mid;

        
    }
};
