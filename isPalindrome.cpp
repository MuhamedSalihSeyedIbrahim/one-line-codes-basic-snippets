//check string is palindrome or not
bool isPalindrome(string a)
{
	int l = 0, h = a.length() - 1;
    
	while (h > l)
	{
		if (a[l++] != a[h--])
		{
			return false;
		}
	}
 return true;
}
