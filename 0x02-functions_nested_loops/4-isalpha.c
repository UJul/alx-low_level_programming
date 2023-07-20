#include "main.h"

/**
  *_isalpha - Prints text.
  *@c : Print @.
  *Return : 0.
 */

int _islower(int c) {
    if (c >= 'a' && c <= 'z') {
        return 1;
    }
    return 0;
}
