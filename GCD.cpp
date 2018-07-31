//gcd method 1(recursion)
int gcd(int a, int b){
    if (a == 0 || b == 0)
       return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

//gcd method 2 (recursion)
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}


//find gcd for an array
int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n){
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);
 
    return result;
}
/*
*invocation
*int arr[] = { 2, 4, 6, 8, 16 };
*int n = sizeof(arr) / sizeof(arr[0]); //gives the total no of elements in array
*cout << findGCD(arr, n) << endl;
*/




// in cpp predefined function for gcd
//must include <algorithm>
int gcd_output=__gcd(a, b);
