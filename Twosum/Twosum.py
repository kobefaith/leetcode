class Solution:
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
        dic={}
        result = []
        index=list(range(len(num)))
        for i in index:
            dic[num[i]]=i
        i=0
        for i in index:
            index2 = dic.get(target-num[i])
            if index2 != None and index2 >i:
                result.append(i+1)
                result.append(index2+1)
                break
        result_tuple=(result)
        return result_tuple