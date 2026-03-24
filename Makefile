TARGET = programme

SRCS = hello_word.c fonctionstd1.c

all:
	gcc $(SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)