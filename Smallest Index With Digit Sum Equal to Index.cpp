class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n =  nums.size();
        for(int i = 0 ; i< n ; i++){
            int sum = 0;
            int value = nums[i];
            while(value>0){
                int lastCH = value % 10;
                sum += lastCH;
                value /=10;
            }
            if(sum == i) return i;
        }
        return -1;
    }
};
