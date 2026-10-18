class Solution {
public:
    int maxArea(vector<int>& height) {

        int area = 0 ;
        
        for (int left=0, right=height.size()-1 ; right>left ; ) {

            int h = 0 ;
            int w = right - left ;

            if (height[left] >= height[right]) {
                h = height[right] ;
                right-- ;
            }
            else {
                h = height[left] ;
                left++ ;
            }

            if ((h*w) > area) {
                area = h*w ;
            }
        } 

        return area ;
    }
};