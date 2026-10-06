class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
        int max = 0;
        int l = 0;
        int r = heights.size()-1;
        int height = 0;
        while (r - l >= 1)
        {
            cout << "test" << endl;
            if (heights[r] < heights[l])
            {
                height = heights[r];
                r--;
            }
            else

            {
                height = heights[l];
                l++;
            }
            int area = height * (r-l+1);
            if (area > max)
            {
                max = area;
            }
        }
        return max;








        
    }
};
