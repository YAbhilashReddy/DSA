class Solution {
    public int[] diStringMatch(String s) {
        int n = s.length() , i = 0 , j = n;
        int[] arr = new int[n+1];
        for(int x=0 ; x<n ; x++){
            if(s.charAt(x) == 'I') arr[x] = i++;
            else arr[x] = j--;
        }
        arr[n] = j;
        return arr;
    }
}