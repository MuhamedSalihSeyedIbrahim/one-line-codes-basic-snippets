// reverse a string and print(recursion)
void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}

//invocation
reverse(char_arrayName);



//in cpp 
//must inlude<algorithm>
string str = "<some string>";
reverse(str.begin(), str.end());


//reverse the string and place it in same string
void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
//if a string is passed then reversed string is replaced in a itself
