class Solution(object):
    def diStringMatch(self, s):
        n = len(s)
        i , j = 0 , n
        arr = [0] * (n+1)
        for x in range(n):
            if(s[x] == 'I'):
                arr[x] = i
                i += 1
            else :
                arr[x] = j
                j -= 1
        arr[n] = j
        return arr