#include <unistd.h>
#include <stdio.h>

int   ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {  
        i++;
    }
    return (i);
} 


int main()
{
    int length;
    char str[] = "This place is a lie";
    length = ft_strlen(str);

    printf("The length of the string is: %d", length);

    return 0;
}