// Find the product of digits of n!, where ! is the factorial operation.

// Example:

// ProdFactorial(4) = 8
// Since 4! = 1 * 2 * 3 * 4 = 24, and 2 * 4 = 8.

// [input] integer n
//	  A non-negative integer.

// [output] integer

int ProdFactorial(int n) {
    if(n < 2)
        return 1;
    if(n < 3)
        return n;
    if(n < 5)
        return n*2;
    else
        return 0;
}