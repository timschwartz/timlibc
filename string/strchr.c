#include <string.h>
#include <stdlib.h>

const char *strchr(const char *s, int c)
{
    while(*s != '\0')
    {
        if(*s == c) return s;
        s++;
    }
    if(c == '\0') return s;
    return NULL;
}
