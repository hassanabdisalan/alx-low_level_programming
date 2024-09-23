#include "main.h"
#include <stddef.h>
char *_strpbrk(char *s, char *accept) {
    while (*s) {
        char *temp = accept;

        while (*temp) {
            if (*s == *temp) {
                return s;
            }
            temp++;
        }
        s++;
    }
    return NULL;
}
