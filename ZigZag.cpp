// The zig zag of an array is another array consisting of elements that represent the number of consecutive rises and falls, starting with the rises.

// A rise is a pair of consecutive elements ni, ni+1, such that ni < ni+1. Similarly, a fall is pair of consecutive elements ni, ni+1, such that ni > ni+1.

// Find the zig zag of the given array.

// Example:

// For n = [1,0,4,5] we have ZigZag(n) = [0,1,2]
// Zig zag starts with no rise, followed by one fall (1 -> 0) and two raises (0 -> 4 and 4 -> 5).

// For n = [1,9,4,7,2,0,1,2,9] we have ZigZag(n) = [1,1,1,2,3]

// [input] array.integer n
// 		Array of integers. It is guaranteed that each two consecutive elements are different. |n| > 2.

// [output] array.integer
// 		The zig zag of n.

std::vector< int > ZigZag(std::vector< int > n) {

    std::vector< int > ZigZag;
    int j = 0, i =1;

    ZigZag.push_back(n[0] < n[1] ? 1 : 0);
    if(ZigZag[j] == 0)
        ZigZag.push_back(++j);

    for(; i < n.size()-1; i++){
        if(j%2 == 0)
            if(n[i] < n[i+1])
                ZigZag[j] += 1;
            else{
                ZigZag.push_back(1);
                j++;
            }
        else
            if(n[i] > n[i+1])
                ZigZag[j] += 1;
            else{
                ZigZag.push_back(1);
                j++;
            }
    }

    return ZigZag;
}