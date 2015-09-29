MiniProjectA : menu.o registerID.o status.o railway.o
	gcc menu.o registerID.o status.o railway.o -o project
menu.o : menu.c status.h registerID.h
	gcc -c menu.c
registerID.o : registerID.c registerID.h
		gcc -c registerID.c
status.o : status.c status.h
		gcc -c status

