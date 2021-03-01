/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** macro header for the my_ls project
*/

#ifndef MY_LS_H_
#define MY_LS_H_

#include "lib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

typedef struct param_s {
    char **folders;
    char **flags;
} param_t;

void print_size(struct stat info);
void print_group(struct stat info);
void print_user(struct stat info);
void print_nb_links(struct stat info);
void print_permissions(struct stat info);
void print_permission_other(struct stat info);
void print_permission_group(struct stat info);
void print_permission_user(struct stat info);

param_t *init_param(void);
int do_l_flag(param_t *params, DIR *dirp, struct dirent *dirent);
int is_flag(char *str);
void print_blue(char *name);
int my_ls(char **av, int ac);
void print_file(struct dirent *inside);
int parse_dir(param_t *params, char **av);
int parse_flags(param_t *params, char **av);
int parse_input(param_t *params, char **av);
int print_with_flags(param_t *params, DIR *dirp, struct dirent *dirent);
DIR *my_check_path(char **av, int ac, DIR *dirp);
int print_current(param_t *params,  DIR *dirp, struct dirent *inside);
struct dirent *my_return_dirent_filled(DIR *dirp, struct dirent *dirent);
int print_folders(param_t *params, int ac, DIR *dirp, struct dirent *inside);
void print_blue(char *name);
void print_total(DIR *dirp, struct dirent *dirent, char *current);
void print_time(struct stat info);


#endif /* !MY_LS_H_ */
