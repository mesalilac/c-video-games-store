#include <stdio.h>
#include <string.h>

void help_print(char *command, char *description) {
    printf("%s\t%s\n", command, description);
}

int main() {
    printf("################################\n");
    printf("#     Game store dashboard     #\n");
    printf("################################\n");
    printf("type 'help' for all commands\n");

    int quit_shell = 0;

    while (quit_shell == 0) {
        char input[30];

        printf("\n> ");
        fgets(input, sizeof(input), stdin);

        // removes trailing \n
        input[strcspn(input, "\n")] = 0;

        // Handle input
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
            quit_shell = 1;
        }

        else if (strcmp(input, "list") == 0) {}

        else if (strcmp(input, "add") == 0) {}

        else if (strcmp(input, "change") == 0) {}

        else if (strcmp(input, "remove") == 0) {}
    }

    return 0;
}
