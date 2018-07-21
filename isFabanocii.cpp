
#include <math.h>
//must include cmath/math.h to do process
//perfect square check
bool isPerfectSquare(int x)
{
	int s = sqrt(x);
	return (s*s == x);
}

bool isFibonacci(int n)
{
	
	return isPerfectSquare(5*n*n + 4) ||
		isPerfectSquare(5*n*n - 4);
}


//invocation example
isFabanoci(a);
