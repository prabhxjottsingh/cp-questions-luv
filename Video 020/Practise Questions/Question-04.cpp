const int N = 3e8+10;
int hsh[N];
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0; i<nums.size(); i++)
            x = x^nums[i];
        return x;
    }
};

//PRoperty of XOR operaotr 
x^x=0;