class Solution(object):
    def thousandSeparator(self, n):
        if(n < 1000):
            return str(n)
        else :
            s = ''
            c = 0
            while(n != 0):
                if(c < 3) :
                    c += 1
                    s += (str(n % 10))
                    n = n // 10
                else :
                    s += ('.')
                    c = 0
            s = s[::-1]
            return s
        return ''