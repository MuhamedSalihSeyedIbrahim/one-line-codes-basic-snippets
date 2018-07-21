bool isPrime(int n)
{
  if(n==1||n==0)return false;

  for(int i = 2; i <= n/2; ++i)
  {
      if(n%i == 0)
      
          return false;
      
  }
  return true;
}


/**here the 0 and 1 are not prime numbers so it return 0
* loop goes up to n/2
* we can replace it with sqrt(n) and include math library so O(n/2) becomes O(sqrt(n))
**/
