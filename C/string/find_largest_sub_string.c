#include <stdio.h>
#include <stdlib.h>
int Substring(char s[],int n)
{
/* find the particular character repeted how many times  */
    int ans = 1, temp = 1;

    for (int i = 1; i < n; i++) 
    {
        if (s[i] == s[i - 1])
       	{
            ++temp;
        }
        else
       	{
            if (ans<temp)
                   ans=temp;
            temp = 1;
        }
    }
            if (ans<temp)
                   ans=temp;

    return ans;
}

int main()
{
    char s[] = "abcddffffffabcd";
  int n=sizeof(s);
          printf("%d\n",n);
    printf("%d\n", Substring(s,n));

    return 0;
}
