class Solution(object):
    def minPrice(self, prices, discounts):
        prices.sort(reverse = True)
        discounts.sort(reverse = True)
        total = j = 0
        for i in prices:
            if(j < len(discounts)):
                total += (i * (100 - discounts[j]) / 100.0)
                j += 1
            else :
                total += i
        return total