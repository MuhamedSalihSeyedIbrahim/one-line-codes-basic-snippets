// Return true if year is a multiple 
// 0f 4 and not multiple of 100. 
// OR year is multiple of 400. 


bool checkYear(int year) { 
  return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)); 
}
