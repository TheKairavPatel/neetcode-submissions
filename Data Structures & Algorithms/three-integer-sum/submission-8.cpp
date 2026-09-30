class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> out;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }   
            int l = i + 1;
            int h = nums.size() - 1;
            int total;
            while (l < h)
            {
                total = nums[i] + nums[l] + nums[h];
                if (total < 0)
                {
                    l++;
                }
                else if (total > 0)
                {
                    h--;
                }
                else if (total == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[h]);
                    out.push_back(temp);
                    l++;
                    while (l < h && nums[l] == (nums[l-1])) {l++;}

                }

            }



        }
        return out;



    }
};
