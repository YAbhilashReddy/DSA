class Solution(object):
    def elevatorRequests(self, n, requests):
        total = requests[0]
        for i in range(1 , len(requests)):
            total += abs(requests[i-1] - requests[i])
        return total