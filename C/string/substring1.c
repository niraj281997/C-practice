#include<stdio.h>
#include<stdlib.h>


int main()
{
    char str1[80], str2[80];
    int l, i, j;
					/*find the second string is available on first string */
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    //finding length of second string
    for (l = 0; str2[l] != '\0'; l++);

    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        printf("Substring found at position %d\n", i - j );
    }
    else
    {
        printf("Substring not found %s\n",str2);
    }

    return 0;
}
