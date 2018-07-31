//check given number is amstron or not
bool isAmstrong(int number){
    int  originalNumber, remainder, result = 0, n = 0 ;
         originalNumber = number;
    while (originalNumber != 0){
        originalNumber /= 10;
        ++n;
    }
    originalNumber = number;
    while (originalNumber != 0){
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
    if(result == number)
        return 1;
     else
        return 0;
   }
