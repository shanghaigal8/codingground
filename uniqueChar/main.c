#include <stdio.h>

int main()
{
    char* s = "hello";
    
    if (isUniqueChar(s))
        printf("%s has unique char\n", s);
    else
        printf("%s has duplicate char\n", s);
        
    return 0;
}

