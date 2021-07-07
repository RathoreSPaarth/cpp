class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int ways = 0;
        
        for(int i = 0; i<nums.size(); i++){
            int even = sumOfEven(nums,0,i) + sumOfOdd(nums,i+1,nums.size());
            int odd = sumOfOdd(nums,0,i) + sumOfEven(nums,i+1,nums.size());
            if(even == odd)
                ways++;
        }
        return ways;
    }
    
    int sumOfEven(vector<int>arr, int start, int end){
        int sumEven = 0;
        for(int i = start; i<end; i++){
            if(i%2 == 0){
                sumEven+=arr.at(i);
            }
        }
        return sumEven;
    }
    
    int sumOfOdd(vector<int>arr, int start, int end){
        int sumOdd = 0;
        for(int i = start; i<end; i++){
            if(i%2 != 0){
                sumOdd+=arr.at(i);
            }
        }
        return sumOdd;
    }

};
