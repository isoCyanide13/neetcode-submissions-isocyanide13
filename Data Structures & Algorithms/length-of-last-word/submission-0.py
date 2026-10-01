class Solution:
    # author: isocyanide13
    def lengthOfLastWord(self, s: str) -> int:
        last = ""
        for i in range(len(s)-1,-1,-1):
            if(s[i] != ' '):
                last += s[i]
            else:
                if(len(last)):
                    break
                else:
                    continue
        return len(last)
        