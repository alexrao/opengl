#g++ hello.c -o hello -lglut -lGL -lGLU



CFLAGS = -lglut -lGL -lGLU

CC = gcc

APPLICATION := hello.bin

SOURCE := hello.c
SOURCE += test.c



OBJS = $(patsubst %.c,%.o,$(SOURCE))

.PHONY: all

all: $(APPLICATION)

$(APPLICATION): $(OBJS)
	@echo [Link $@]
	#$(CC)  $(SOURCE) -o $(OBJ) $(CFLAGS)
	$(CC) -o $@ $(OBJS) $(CFLAGS)
	@echo [done]
	sync

%.o: %.c
	@echo [Compile $^ ...]
	$(CC)  -c $^ -o $@ $(CLASSFLAG)

clean:
	rm $(APPLICATION)
	rm *.o

