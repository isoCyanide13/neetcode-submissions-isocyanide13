class Solution:
    # author: isocyanide13
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = {}
        for i in range(len(nums)):
            k = target - nums[i]
            if k in mp:
                return [mp[k], i]
            else:
                mp[nums[i]] = i
        return []

        