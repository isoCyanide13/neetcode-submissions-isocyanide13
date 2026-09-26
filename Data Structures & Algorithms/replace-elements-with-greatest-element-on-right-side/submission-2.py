class Solution:
    # author: isocaynide13
    def replaceElements(self, arr: List[int]) -> List[int]:
        result = [0 for i in range(len(arr))]

        # initiallt mx = -1 as we are traversing right to left
        # so there is no element int right after the last ele
        mx = -1
        for i in range(len(arr)-1, -1, -1):
            result[i], mx = mx, max(mx,arr[i])
        return result
        