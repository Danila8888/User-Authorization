#include "new_pw.h"
#include "struc.h"
FILE *file, *in;
void new_pw(passwd *p, int st){
    char newpaswrd[30],name[30],pass[30],realname[30];
    int k,f;
    char pass_shifr[30];
	int key=2;
    printf("%s ,Введите новый пароль\n",p->pw_realname);
     file = fopen("passwd.txt", "r");
     in = fopen("new.txt","w");
   scanf("%29s",newpaswrd);
for(f=0;f<30;f++){
pass_shifr[f] = '\0';}
for (k=0;k<strlen(newpaswrd);k++){
                pass_shifr[k]=newpaswrd[k]^key;
                }
  while(!feof(file)){
    fscanf(file,"%30[^:]: %30[^:]: %30[a-zA-Z ] [^\n]", name,pass,realname);
    if (strcmp(strdup(name),p->pw_name)==0){
      fprintf(in,"%s:%s:%s\n",name,pass_shifr,realname);  
    }
    else fprintf(in,"%s:%s:%s\n",name,pass,realname);
  
  }
    fclose(file);
    fclose(in);
    rename("new.txt","passwd.txt");
}
