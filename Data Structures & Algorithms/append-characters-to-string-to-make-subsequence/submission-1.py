class Solution:
    # author: isocyanide13
    def appendCharacters(self, s: str, t: str) -> int:
        n = len(s)
        m = len(t)

        i = 0
        j = 0
        while i < n and j < m:
            if(t[j] == s[i]):
                j += 1
            i += 1

        return m-j;        