class Solution:
    # author: isocyanide13
    def countSeniors(self, details: List[str]) -> int:
        ages = []
        for s in details:
            age = int(s[11:13])
            ages.append(age)
        count = 0
        for age in ages:
            if(age > 60):
                count += 1
        return count

        