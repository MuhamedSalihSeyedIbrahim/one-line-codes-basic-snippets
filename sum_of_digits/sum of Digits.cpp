//calculate the sum of digits

//recursion method
 
int sumDigits(int no){
   return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
}

//loop method

int getSum(int n){
    int sum;
    for (sum = 0; n > 0; sum += n % 10, n /= 10);
    return sum;
}


