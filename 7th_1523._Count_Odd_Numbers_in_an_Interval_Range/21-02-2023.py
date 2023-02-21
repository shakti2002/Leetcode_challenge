class Solution(object):
    def countOdds(self, low, high):
        """
        :type low: int
        :type high: int
        :rtype: int
        """
        if low %2 ==0:
            return ((high-low+1)//2)    #exp .... low=14 & high=17 then (17-14+1)//2 = 2
        return (((high-low)//2)+1)      #exp .... low=3 & high=7 then ((7-3)//2)+1 = 3
