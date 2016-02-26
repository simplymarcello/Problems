// Count the number of times the string sub appears within the string sup.

// Example:

// countSub("abcdefga", "a") = 2
// countSub("aaa", "aa") = 2
// 	[input] string sup

// The string to count appearances in, 1 ≤ |super| ≤ 30.
// 	[input] string sub

// The substring to look for, 1 ≤ |sub| ≤ |sup|.
// 	[output] integer

// The number of occurrences.

template <class T>
int countSub(T p, T b){
    auto x = 0, i = 0;
    while((x = p.find(b, x)) != T::npos)
        i++, x++;
    return i;
}