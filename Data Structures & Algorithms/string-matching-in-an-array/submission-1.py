class Solution:
    # author: isocyanide13
    def stringMatching(self, words: List[str]) -> List[str]:
        result = []
        
        for word in words:
            for s in words:
                if s != word and word in s:
                    result.append(word)
                    break
        return result