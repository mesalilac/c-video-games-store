#include <stdio.h>
#include <string.h>
#include "include/command_handler.h"


int main() {
    printf("################################\n");
    printf("#     Game store dashboard     #\n");
    printf("################################\n");
    printf("type 'help' for all commands\n");

    int quit_shell = 0;

    while (quit_shell == 0) {
        char input[30];

        printf("> ");
        fgets(input, sizeof(input), stdin);

        // removes trailing \n
        input[strcspn(input, "\n")] = 0;

        command_handler(input, &quit_shell);
    }

    return 0;
}
