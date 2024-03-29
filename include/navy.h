/*
** EPITECH PROJECT, 2019
** epitech
** File description:
** mysh
*/

#ifndef NAVY_H
#define NAVY_H

#include "../lib/my/mylib.h"
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <fcntl.h>

#define COLLECT -2147483647
#define HELP "USAGE\n\t./navy [first_player_pid] navy_positions\n\
DESCRIPTION\n\tfirst_player_pid:  only for the 2nd player.  \
pid of the first player.\n\tnavy_positions:  file representing the \
positions of the ships.\n"

typedef struct navy {
    char **map_me;
    char **map_ennemy;
}navy_t;

int bit(int add);

int my_kill(pid_t pid, int sig);
void signal_handler(int sig);
void get_pid(int sig, siginfo_t *info, void *context);
int server_part(pid_t pid, pid_t pid_e, navy_t *na);
int client_part(pid_t pid, pid_t pid_e, navy_t *na);
char *ask_for_attack(navy_t *na);
void send_pos(char *str, pid_t pid_e);
char *receive_pos(pid_t pid_e, char *str);
void is_touched(char *str, navy_t *na, pid_t pid_e);
int waiting_attack(char *str, navy_t *na, pid_t pid_e);
int attack(char *str, navy_t *na, pid_t pid_e);
int check_win(char **tab);
int check_win_second(char **tab, int j, int k);
int is_win_server(pid_t pid_e, navy_t *na, char *str);
int is_win_client(pid_t pid_e, navy_t *na, char *str);
navy_t *init_game(int ac, char **av);

void put_ship_size_two(navy_t *na, char **tab);
void put_ship_size_three(navy_t *na, char **tab);
void put_ship_size_four(navy_t *na, char **tab);
void put_ship_size_five(navy_t *na, char **tab);
int put_ship(navy_t *na, char **tab);
void display_first_line(void);
void display_map(navy_t *na);
void verif_space_map(int i, int j, navy_t *na);
char **create_map(navy_t *na, char *str);
void verif_space_map_sec(int i, int j, navy_t *na);
int create_map_sec(navy_t *na);
char *search_filepath(char **argv, int argc);
char *reading(char *filepath);
char **str_tab_ship(char *str, navy_t *na);
int init_map_second(navy_t *na, char *str);
int init_map(int argc, char **argv, navy_t *na);
int check_ship_char_one(char **tab);
int check_ship_two_dot(char **tab);
int check_ship_letter(char **tab);
int check_ship_number(char **tab);
int check_ship_main(char **tab);
int check_different(char **tab);
int verif_size_two(char **tab);
int verif_size_three(char **tab);
int verif_size_four(char **tab);
int verif_size_five(char **tab);

#endif