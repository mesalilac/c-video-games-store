#include <stdio.h>
#include <string.h>

void help_print(char *command, char *description) {
    printf("%s\t%s\n", command, description);
}

void command_handler(char *input, int *quit_shell) {
        if (strcmp(input, "help") == 0) {
            help_print("help", "Print this message");
            help_print("exit", "Exit the shell");
            help_print("list", "List all games");
            help_print("add", "add a new game");
            help_print("change", "change name or price of a game");
            help_print("remove", "remove a game");
        }

        else if (strcmp(input, "exit") == 0) {
            printf("Exiting shell...\n");
            *quit_shell = 1;
        }

        else if (strcmp(input, "list") == 0) {}

        else if (strcmp(input, "add") == 0) {}

        else if (strcmp(input, "change") == 0) {}

        else if (strcmp(input, "remove") == 0) {}
}
