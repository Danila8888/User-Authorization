#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "f1nd.h"
#include "new_pw.h"
#include "read.h"
#include "struc.h"
passwd* spisok;

int main()
{
    printf("\nВведите логин \n");
 char this[30];   
        read_pass(&spisok);
        scanf("%29s",this);
        Find(spisok,this);
    return 0;
}
