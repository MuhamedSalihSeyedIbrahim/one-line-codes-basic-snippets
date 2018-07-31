//lcm for two numbers
int gcd(int a, int b){
    if (a == b)
        return a;
     if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}

//incvocation
lcm(a,b);




//lcm for array
unsigned long long int LCM(int arr[], int n)
{
    // Find the maximum value in arr[]
    int max_num = 0;
    for (int i=0; i<n; i++)
        if (max_num < arr[i])
            max_num = arr[i];
 
    // Initialize result
    unsigned long long int res = 1;
 
    // Find all factors that are present in
    // two or more array elements.
    int x = 2;  // Current factor.
    while (x <= max_num)
    {
        // To store indexes of all array
        // elements that are divisible by x.
        vector<int> indexes;
        for (int j=0; j<n; j++)
            if (arr[j]%x == 0)
                indexes.push_back(j);
 
        // If there are 2 or more array elements
        // that are divisible by x.
        if (indexes.size() >= 2)
        {
            // Reduce all array elements divisible
            // by x.
            for (int j=0; j<indexes.size(); j++)
                arr[indexes[j]] = arr[indexes[j]]/x;
 
            res = res * x;
        }
        else
            x++;
    }
 
    // Then multiply all reduced array elements
    for (int i=0; i<n; i++)
        res = res*arr[i];
 
    return res;
}



/**
*int arr[] = {1, 2, 3, 4, 5, 10, 20, 35};
*int n = sizeof(arr)/sizeof(arr[0]);
*cout << LCM(arr, n) << "\n";
*/
