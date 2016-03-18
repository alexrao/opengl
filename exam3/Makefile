#g++ hello.c -o hello -lglut -lGL -lGLU



CFLAGS = -lglut -lGL -lGLU -lm

CFLAGS += -std=c99

CC = gcc

APPLICATION := main.bin

SOURCE := main.c
#SOURCE += test.c



OBJS = $(patsubst %.c,%.o,$(SOURCE))

.PHONY: all

all: $(APPLICATION)

$(APPLICATION): $(OBJS)
	@echo [Link $@]
	$(CC) -o $@ $(OBJS) $(CFLAGS)
	@echo [done]
	sync

%.o: %.c
	@echo [Compile $^ ...]
	$(CC)  -c $^ -o $@ $(CFLAGS)

clean:
	rm $(APPLICATION)
	rm *.o

