class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        counts = defaultdict(int)
        if len(s) != len(t):
            return False
        for ch in s:
            counts[ch] = counts[ch]+1
        for ch in t:
            counts[ch] = counts[ch]-1
        for count in counts.values():
            if count != 0:
                return False
        return True