#include <stdio.h>
#include <stdlib.h>

int main() {
        char *user = getenv("USER");

        printf("Hello %s!", user);
        return 0;
}
