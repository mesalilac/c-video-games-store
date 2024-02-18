#include "include/game.h"
#include <stdio.h>
#include <string.h>

void help_print(char *shortcut, char *command, char *description) {
    printf("%s, %s\t%s\n", shortcut, command, description);
}

int main() {
    printf("################################\n");
    printf("#     Game store dashboard     #\n");
    printf("################################\n");
    printf("Type 'h' or 'help' for all commands\n");

    int game_id = 0;
    struct Game games[100];
    games[game_id].id = game_id;
    games[game_id].name = "Game1";
    games[game_id].price = 10.0;
    ++game_id;

    games[game_id].id = game_id;
    games[game_id].name = "Game2";
    games[game_id].price = 20.0;
    ++game_id;

    games[game_id].id = game_id;
    games[game_id].name = "Game3";
    games[game_id].price = 30.0;
    ++game_id;

    int quit_shell = 0;

    while (quit_shell == 0) {
        char input[30];

        printf("\n> ");
        fgets(input, sizeof(input), stdin);

        // removes trailing \n
        input[strcspn(input, "\n")] = 0;

        // Handle input
        if (strcmp(input, "h") == 0 || strcmp(input, "help") == 0) {
            help_print("h", "help", "Print this message");
            help_print("e", "exit", "Exit the shell");
            help_print("l", "list", "List all games");
            help_print("a", "add", "add a new game");
            help_print("e", "edit", "edit name or price of a game");
            help_print("r", "remove", "remove a game");
        } else if (strcmp(input, "e") == 0 || strcmp(input, "exit") == 0) {
            printf("Exiting shell...\n");
            quit_shell = 1;
        } else if (strcmp(input, "l") == 0 || strcmp(input, "list") == 0) {
            list_games(game_id, games);
        } else if (strcmp(input, "a") == 0 || strcmp(input, "add") == 0) {
            add_game(&game_id, games);
        } else if (strcmp(input, "e") == 0 || strcmp(input, "edit") == 0) {
            edit_game(game_id, games);
        } else if (strcmp(input, "r") == 0 || strcmp(input, "remove") == 0) {
            remove_game(&game_id, games);
        }
    }

    return 0;
}
