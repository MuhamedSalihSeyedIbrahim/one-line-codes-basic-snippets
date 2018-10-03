//nearest power of 2
#include<stdbool.h> 
#include<math.h> 

 int nearestPowerof2(int n) {
    int p,L,H;
    p = (int)log2(n); 
    L=(int)pow(2, p);
    H=L*2;
    return ((H-n)<(n-L))?H:L;
}  
