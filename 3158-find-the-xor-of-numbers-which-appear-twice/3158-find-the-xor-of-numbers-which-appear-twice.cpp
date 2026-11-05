class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {

    for (int i=0 ; i<nums.size()-1 ; i++) {
        for (int j=0 ; j<nums.size()-i-1 ; j++) {

            if (nums[j+1] < nums[j]) {
                int temp = nums[j] ;
                nums[j] = nums[j+1] ;
                nums[j+1] = temp ;
            }
        }
    }

    int result = 0 ;
    for (int i=0 ; i<nums.size()-1 ; i++) {

        if (nums[i] == nums[i+1]) {
            result = result^nums[i] ;
            i++ ;
        }
    }        

    return result ;

    }

};