#include <stdio.h>
#include <string.h>

void help_print(char *command, char *description) {
    printf("%s\t%s\n", command, description);
}

void command_handler(char *input, int *quit_shell) {

        if (strcmp(input, "help") == 0) {
            help_print("help", "Print this message");
            help_print("exit", "Exit the shell");
        }
        else if (strcmp(input, "exit") == 0) {
            printf("Exiting shell...\n");
            *quit_shell = 1;
        }
}
