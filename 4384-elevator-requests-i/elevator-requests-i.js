/**
 * @param {number} n
 * @param {number[]} requests
 * @return {number}
 */
var elevatorRequests = function(n, requests) {
    let total = requests[0];
    for(let i=1 ; i<requests.length ; i++) total += Math.abs(requests[i-1] - requests[i]);
    return total;
};