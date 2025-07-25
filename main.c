#include <stdio.h>

int main() {
    const char *frames[] = {
        "   *   \n  ***  \n ***** \n*******\n  ***  \n  ***  ",
        "   *   \n  ***  \n ***** \n*******\n ***** \n  ***  ",
        "   *   \n  ***  \n ***** \n*******\n*******\n ***** ",
        "   *   \n  ***  \n ***** \n*******\n ***** \n  ***  ",
        "   *   \n  ***  \n ***** \n*******\n  ***  \n  ***  "
    };
    for (int i = 0; i < 10; ++i) {
        printf("\033[2J\033[H"); // Limpiar pantalla
        printf("%s\n", frames[i % 5]);
        fflush(stdout);
        for (volatile long j = 0; j < 100000000; ++j); // Pequeña pausa
    }
    printf("\n¡Arte ASCII animado en C!\n");
    return 0;
}
