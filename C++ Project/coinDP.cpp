/* Coin Change */
#include <cstdio>
#include <cstring>
using namespace std;
int N = 5, V, coinValue[5] = {1, 5, 10, 25, 50}, memo[6][7500];
// N and coinValue are fixed for this problem, max V is 7489
int ways(int type, int value) {
int ans;
if (value == 0) return 1;
if (value < 0 || type == N) return 0;
return ans = ways(type + 1, value) + ways(type, value
-
coinValue[type]);
}
int main() {
// we only need t o initialize this once
while (scanf("%d", &V) != EOF)
printf("%d\n", ways(0, V));
return 0;
}
