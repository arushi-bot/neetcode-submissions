class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r= heights.size() - 1;
        int Area = 0;
        int maxArea=0;
        while(l<r)
        {
            if(heights[l]< heights[r]){
                Area=heights[l]*(r-l);
                l++;
            }
            else if(heights[r]< heights[l])
            {
                Area=heights[r]*(r-l);
                r--;
            }
            else{
                Area = heights[l]*(r-l);
                l++;
                r--;
            }
            if(Area > maxArea)
                maxArea=Area;
        }
        return maxArea;
    }
};
