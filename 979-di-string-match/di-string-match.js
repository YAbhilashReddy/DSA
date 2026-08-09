/**
 * @param {string} s
 * @return {number[]}
 */
var diStringMatch = function(s) {
    let n = s.length , i = 0 , j = n;
    let arr = Array(n).fill(0);
    for(let x=0 ; x<n ; x++){
        if(s[x] == 'I') arr[x] = i++;
        else arr[x] = j--;
    }
    arr[n] = j;
    return arr;
};