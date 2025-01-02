class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        #希望找到 只增加 or 只減少 (不可以又增加、又減少)
        N = len(nums) #有N個數字
        big, small = False, False #一開始, 還不知道有沒有變大、變小
        for i in range(N-1): #要跑 N-1 次迴圈(兩兩比較, 會少1次)
            d = nums[i+1] - nums[i]
            if d>0: big = True #變大
            if d<0: small = True #變小
        if big and small: return False #又大? 又小? 失敗!
        else:return True