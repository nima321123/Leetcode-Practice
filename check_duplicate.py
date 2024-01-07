class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        setArray = set()
        for i in nums:
        # checks if the element is already present in the set, if yes returns true 
            if i in setArray:
                return True
        # if the element is not present then it gets added into the set
            else:
                setArray.add(i)

        return False