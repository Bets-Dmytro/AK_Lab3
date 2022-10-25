TARGET = Lab3
CC = gcc

SOURCE = $(wildcard *.c)
OBJECT = $(patsubst %.c, %.o, $(SOURCE))

$(TARGET) : $(OBJECT)
	$(CC) $(OBJECT) -o $(TARGET)

%.o : %.c
	$(CC) -c $< -o $@
	
clean : 
	rm -rf *.o $(TARGET)
