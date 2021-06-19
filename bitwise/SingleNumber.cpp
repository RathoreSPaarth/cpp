int singleNumber(vector<int>& nums) {
        int val = 0;
        for(int i = 0; i<nums.size(); i++){
            val = val^nums.at(i);
        }
        return val;
}

//this is not my solution.
