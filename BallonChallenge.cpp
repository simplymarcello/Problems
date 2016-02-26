// There are N balloons floating in the air in a large room, lined up from left to right. Young Perica likes to play with arrows and practice his hunting abilities.

// He shoots an arrow from the left to the right side of the room from an arbitrary height he chooses. The arrow moves from left to right, at a chosen height H until it finds a balloon. The moment when an arrow touches a balloon, the balloon pops and disappears and the arrow continues its way from left to right at a height decreased by 1. Therefore, if the arrow was moving at height H, after popping the balloon it travels on height H - 1.

// Our hero’s goal is to pop all the balloons using as little arrows as possible.

// Example:
// 	Baloni(5, [2,1,5,4,3]) = 2
// 	The first arrow should be launched at H = 2, and the second one at H = 5.

// [input] integer N
// 	The number of baloons.

// [input] array.integer H
// 	Each integer Hi (1 ≤ H[i] ≤ 1 000 000) is the height at which the ith baloon floats, respectively from left to right.

// [output] integer
// 	The minimum number of times Pero needs to shoot an arrow so that all balloons are popped.

int Baloni(int N, std::vector< int > H) {
    int min = 0, cur = 0;
    for(int i = 0; i < H.size()-1; i++){
        cur = H[i];
        if(cur == -1)
            continue;
        min++;
        for(int j = i; j < H.size()-1; j++){
            if(H[j+1] == -1)
                continue;
            if(cur-1 == H[j+1]){
                H[j+1] = -1;
                cur--;
            }
        }
    }
    return H[N-1] == -1 ? min : min+1;
}