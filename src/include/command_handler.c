#include <stdio.h>
#include <string.h>

void help_print(char *command, char *description) {
    printf("%s\t%s\n", command, description);
}

void command_handler(char *p_input, int *p_quit_shell) {
        if (strcmp(p_input, "help") == 0) {
            help_print("help", "Print this message");
            help_print("exit", "Exit the shell");
            help_print("list", "List all games");
            help_print("add", "add a new game");
            help_print("change", "change name or price of a game");
            help_print("remove", "remove a game");
        }

        else if (strcmp(p_input, "exit") == 0) {
            printf("Exiting shell...\n");
            *p_quit_shell = 1;
        }

        else if (strcmp(p_input, "list") == 0) {}

        else if (strcmp(p_input, "add") == 0) {}

        else if (strcmp(p_input, "change") == 0) {}

        else if (strcmp(p_input, "remove") == 0) {}
}
