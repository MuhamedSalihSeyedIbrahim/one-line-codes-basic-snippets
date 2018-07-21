
int biggestOfTwoNumbers(int a,int b){
  return a>b ? a : b; 
}


int biggestOfThreeNumbers(int a,int b,int c){
  return a > b ? (a > c ? a : c) : (b > c ? b : c) ;
}


