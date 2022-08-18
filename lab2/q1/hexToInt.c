#include "hexToInt.h"

long hexToInt(char h [], int ndigits) {
    int decimal = 0;
    int j = 0;
    long base = 1;
    for (int i = ndigits--; i >= 0; i--) {
        if (h[i] >= '0' && h[i] <= '9') {
           decimal +=(h[i] - 48) * base;
            base = base * 16;

        } else if (h[i] >= 'A' && h[i] <= 'F') {
             decimal +=(h[i] -  55) * base;
            base = base * 16;

        } else if (h[i] >= 'a' && h[i] <= 'f') {
            decimal += (h[i] - 87) * base;
            base = base*16;
        }
    }
    return decimal;
}
