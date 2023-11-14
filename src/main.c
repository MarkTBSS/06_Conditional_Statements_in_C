#include <stdio.h>
#include <string.h>

int main() {
    int n = 5;
    char result[20] = "";
    if (n == 1) { strcpy(result, "one"); } 
    if (n == 2) { strcpy(result, "two"); }
    if (n == 3) { strcpy(result, "three"); }
    if (n == 4) { strcpy(result, "four"); }
    if (n == 5) { strcpy(result, "five"); }
    if (n == 6) { strcpy(result, "six"); }
    if (n == 7) { strcpy(result, "seven"); }
    if (n == 8) { strcpy(result, "eight"); }
    if (n == 9) { strcpy(result, "nine"); }
    if (n > 9) { strcpy(result, "Greater than 9"); }

    printf("%s", result);
    return 0;
}