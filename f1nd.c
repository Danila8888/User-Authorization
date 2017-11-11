#include "f1nd.h"
#include "struc.h"
#include "new_pw.h"
passwd* Find(passwd *spisok, char *i)
{
  passwd *p = spisok;
  char psswrd[30];
  int st=0;
   while(p)
   {
  st++;
      if( strcmp((p->pw_name),strdup(i)) == 0) {
         printf("\nВведите пароль: \n");
         scanf("%29s",psswrd);
         if  ( strcmp((p->pw_passwd),strdup(psswrd)) != 0) {

             printf("Неверный пароль\n");
             int j = 1;
                 while ( j<3){
                    scanf("%29s",psswrd);
                    if ( strcmp((p->pw_passwd),strdup(psswrd)) != 0){
                         printf("Неверный пароль \n");
                         j=j+1;
                    } 
                    else{
                        printf("Вход выполнен\n");
                        new_pw(p,st);
                        exit(0);
                    }
                   
                }
                exit(0);
         }
         else {
             printf("Вход выполнен\n");
             new_pw(p,st);
             exit(0);
         }
         break;
      }
      p = p->next;
   }
   
 printf("Неверный логин\n");
   
   return 0;
}
