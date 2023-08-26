#include <stdio.h>


int process(char* a, char* b, char* c, char* d) {

    return *a | (*b << 8) | (*c << 16) | (*d << 24);
}


int main(int argc, char const *argv[]) {

    char a, b, c, d;

    printf("Enter 4 characters >> ");
    scanf("%c", &a);
    scanf("%c", &b);
    scanf("%c", &c);
    scanf("%c", &d);

    if (process(&a, &b, &c, &d) == 1815097443) {
        printf("Flag is: donguCTF{%d%d%d%d}\n", a, b, c, d);
        return 0;
    }

    printf("No flag for you\n");
    return 1;
}
