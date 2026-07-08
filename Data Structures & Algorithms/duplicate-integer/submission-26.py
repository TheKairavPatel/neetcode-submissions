class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        temp = set()
        for i in range(len(nums)):
            temp1 = nums[i]
            if temp1 in temp:
                return True
            temp.add(temp1)
        return False
