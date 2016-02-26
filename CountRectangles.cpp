// Count the number of rectangles that can be cut out of N × N matrix.

// Remember that all squares are rectangles, but not all rectangles are squares.

// Example:
// 	CountRectangles(3) = 36

// [input] integer N

// [output] integer
// 	The number of rectangles.

int CountRectangles(int N) {
    N = (N+1)*N/2;
    return N*N;
}
