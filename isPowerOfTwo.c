//is power of 2
#include<stdbool.h> 
#include<math.h> 
bool isPowerOfTwo(int n) 
{ 
   return (ceil(log(n)/log(2)) == floor(log(n)/log(2))); 
} 
