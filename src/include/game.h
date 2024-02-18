typedef struct Game {
    int id;
    char *name;
    float price;
} Game;

void list_games(int game_id, Game p_games[]);
void add_game(int *game_id, Game *p_games);
