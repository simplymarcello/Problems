// A cake is sliced with n straight lines. Calculate the maximum number of pieces the cake can have.

// Example:

// CakeSlices(0) = 1
// CakeSlices(1) = 2
// CakeSlices(2) = 4
// CakeSlices(3) = 7

// [input] integer n
// 	0 ≤ n ≤ 100

// [output] integer
// 	The maximum number of pieces the sliced cake can have.

int CakeSlice(int n) {
    return (n * n + n + 2) / 2;
}