class Solution {
public:
    bool containsDuplicate(vector<int>& nums){
       int x=0;
       for(int i=0; i<nums.size(); i++){
           x = x^nums[i];
           if(x==0)
               return 1;
       }
       return 0;
    }
};

//XOR operator is of great use.