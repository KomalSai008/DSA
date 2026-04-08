// To find the lenght of the string using pointers
#include <stdio.h>
int string_lenght(char*str)
{
    char*ptr=str;
    int lenght=0;
    while (*ptr!='\0')
    {
        lenght++;
        ptr++;
    }
    return lenght;
} 
int main()
{
    char mystring[]="HELLO";
    int lenght=string_lenght(mystring);
    printf("The string is :\"%s\"\n",mystring);
    printf("The lenght of the string is:%d\n",lenght);
    return 0;
}

