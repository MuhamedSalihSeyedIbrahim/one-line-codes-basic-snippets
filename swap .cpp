void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

invocation eg:
swap(&a,&b);
