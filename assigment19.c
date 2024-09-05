#include <stdio.h>


int main() {
    char ch;
    scanf("%c", &ch);

    int b;
    b = (ch >= 'a' && ch <= 'z') ? 1 : (ch >= 'A' && ch <= 'Z') ? 2 : 0;

    switch (b) {
        case 1:
            printf("Character is lowercase\n");
            break;
        case 2:
            printf("Character is uppercase\n");
            break;
        default:
            printf("Character is neither uppercase nor lowercase\n");
            break;
    }

    return 0;
}