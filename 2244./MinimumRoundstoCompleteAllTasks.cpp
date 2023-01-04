class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        vector<int> counter;
        sort(tasks.begin(),tasks.end());
        if(tasks.size()==1){
            return -1;
        }
   
        int c=1;
        for(int i=1;i<tasks.size();i++){
            if(tasks[i] == tasks[i-1]){
                c++;
            }else{
                counter.push_back(c);
                c=1;
            }
        }
        counter.push_back(c);
        
        int result = 0;
        for(int i=0;i<counter.size();i++){
            if(counter[i] == 1){
                return -1;
            }else if( counter[i] == 2 || counter[i] == 3){
                result++;
            }else{
                result += (counter[i]+2)/3;
            }
        }
        return result;
    }
};
