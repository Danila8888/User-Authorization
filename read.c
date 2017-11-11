#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "read.h"
#include "struc.h"
FILE *file;
void read_pass(passwd **spisok) {
        file = fopen("passwd.txt", "r");
        char name[30];
        char pass[30]; 
        char realname[30];
	int f;
	int x;
	char t[30] = "2";
	char pass_rasshifr[30]=" ";
	int key;
        while(!feof(file)){
             passwd *i = malloc(sizeof(passwd));
             fscanf(file,"%30[^:]: %30[^:]: %30[a-zA-Z ] [^\n]", name,pass,realname);
             i->pw_realname=strdup(realname);
             i->pw_name=strdup(name);
		x=strlen(pass);
              for (f=0;f<x;f++){
		key = atoi(t);
                pass_rasshifr[f]=pass[f]^key;
                }
             	i->pw_passwd=strdup(pass_rasshifr);
                i->next = *spisok;
                *spisok=i;
    for(f=0;f<30;f++)
      pass_rasshifr[f] = '\0';
     }
    fclose(file);    
}
