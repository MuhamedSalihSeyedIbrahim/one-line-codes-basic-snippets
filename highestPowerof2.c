//highest lower power or equal power of 2
int highestPowerof2(int n) 
{ 
   int p = (int)log2(n); 
   return (int)pow(2, p);  
} 
