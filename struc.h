#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct passwd {
    char *pw_name[30];   /* уникальное имя пользователя */
    char *pw_passwd[30]; /* пароль пользователя */
    char *pw_realname[30]; /* настоящее имя пользователя */
    struct passwd *next;
}passwd;
extern FILE* file,*in;
