/*
* strdup, strndup -- save a copy of a string
* The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, 
* and returns a pointer to it.  The pointer may subsequently be used as an argument to the function free(3).
* If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
*/

char	*strdup(const char *s1)
{
	char *str;
    char *p;
    int len = 0;

    while (s1[len])
        len++;
    str = malloc(len + 1);
    p = str;
    while (*s1)
        *p++ = *s1++;
    *p = '\0';
    return str;
}

int main()
{
	/* code */
	return 0;
}