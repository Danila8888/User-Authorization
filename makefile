SRC = main.c read.c f1nd.c new_pw.c
OBJ = main.o read.o f1nd.o new_pw.o
PROG = project
$(PROG) : $(OBJ)
	gcc $(OBJ) -o $(PROG)
$(OBJ) : $(SRC)
