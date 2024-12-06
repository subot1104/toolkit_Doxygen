
#compiler, warning flags, and binary name
CC = g++
CFLAGS = -g -Wall -Wextra
TARGET = employee

all:	$(TARGET)


#compiles objects into a binary
$(TARGET):	Employee.o Officer.o Supervisor.o  main.o
	$(CC) $(CFLAGS) -o $(TARGET) Employee.o Officer.o Supervisor.o  main.o

#compiles given .cpp files into objects
Employee.o:	Employee.cpp Employee.h
	$(CC) $(CFLAGS) -c Employee.cpp

Officer.o:	Officer.cpp Officer.h
	$(CC) $(CFLAGS) -c Officer.cpp

Supervisor.o:	Supervisor.cpp Supervisor.h
	$(CC) $(CFLAGS) -c Supervisor.cpp

main.o:	main.cpp Employee.h Officer.h Supervisor.h
	$(CC) $(CFLAGS) -c main.cpp

#removes objects, backups, and the binary
clean:
	rm -f *.o *~ $(TARGET)
