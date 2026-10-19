
class Solution(object):
    def removeDuplicates(self, nums):

        nums_list = []

        for i in nums:
            if i not in nums_list:
                nums_list.append(i)

        for i in range(len(nums_list)):
            nums[i] = nums_list[i]

        return len(nums_list)
