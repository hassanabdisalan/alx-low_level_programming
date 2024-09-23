#include "main.h"
#include <stddef.h>
char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c) {
            return s;
        }
        s++;
    }
    return (*s == c) ? s : NULL;
}
