#include <stdio.h>

void reverse(char s[], int index) {
    if (s[index] == '\0') {
        return;
    }
    reverse(s, index + 1);
    putchar(s[index]);
}

int main() {
    char s[] = "hello xyz";
    reverse(s, 0);
    return 0;
}
