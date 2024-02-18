#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Game {
    int id;
    char *name;
    float price;
} Game;

void list_games(int game_id, Game p_games[]) {
    if (game_id == 0) {
        return;
    }

    printf("id | name | price\n");
    printf("-------------------\n");
    for (int i = 0; i < game_id; i++) {
        printf("[%d] '%s' - $%.2f\n", p_games[i].id, p_games[i].name,
               p_games[i].price);
    }
}

void add_game(int *game_id, Game *p_games) {
    Game new_game;

    new_game.name = (char *)malloc(sizeof(char) * 100);
    float price = 0.00;

    printf("Enter game name: ");
    fgets(new_game.name, sizeof(new_game.name), stdin);
    new_game.name[strcspn(new_game.name, "\n")] = 0;

    printf("Enter game price: ");
    scanf("%f", &price);

    new_game.id = *game_id;
    new_game.price = price;

    p_games[*game_id] = new_game;
    ++(*game_id);
}
