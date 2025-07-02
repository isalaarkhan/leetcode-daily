class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        pair={}
        for s in range(len(strs)):
            sort="".join(sorted(strs[s]))
            if sort not in pair:
                pair[sort]=[]
            pair[sort].append(strs[s])

        res=[]
        for key,val in pair.items():
            res.append(val)
        return res
        