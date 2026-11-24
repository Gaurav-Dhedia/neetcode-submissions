class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        int n = heights.size();
        int start = 0;
        int end = n - 1;
        int water;
        while (start < end){
            int height = min(heights[start], heights[end]);
            int width = end - start;
            water = height * width;
            maxWater = max(maxWater, water);
            if(heights[start] < heights[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return maxWater;
    }
};
