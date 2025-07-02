class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        if k ==0:
            return nums
        k = k%n
        nums[:] = reversed(nums)
        nums[:k] = reversed(nums[:k])
        nums[k:] = reversed(nums[k:])
        return nums
        