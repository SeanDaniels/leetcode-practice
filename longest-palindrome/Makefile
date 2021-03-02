##
# Project Title
#
# @file
# @version 0.1
#
CC = g++
CCFLAGS = -g -Wall -std=c++0x
OBJ = main.o
TARGET = solution

%.o: %.cpp $(DEPS)
		$(CC) $(CCFLAGS) -c -o $@ $<

$(TARGET): $(OBJ)
		$(CC) $(CCFLAGS) -o $@ $^

clean:
	rm *.o
	rm $(TARGET)
