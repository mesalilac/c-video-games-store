typedef struct Game {
    int id;
    char *name;
    float price;
} Game;

void list_games(int game_id, Game p_games[]);
void add_game(int *game_id, Game *p_games);
void edit_game(int game_id, Game *p_games);
void remove_game(int *game_id, Game *p_games);
