CC=g++
CFLAGS=-Wall -Werror -O2 --std=c++11
COMMON=user.o
OBJS=main.o impl.o $(COMMON)
EXE=concrete_impl.out
TEXE=test_impl.out
TOBJS=main.t.o impl.t.o $(COMMON)

all: $(EXE) $(TEXE)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)
$(TEXE): $(TOBJS)
	$(CC) $(CFLAGS) -o $(TEXE) $(TOBJS)
main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp
impl.o: impl.h impl.cpp interface.h
	$(CC) $(CFLAGS) -c impl.cpp
main.t.o: main.t.cpp
	$(CC) $(CFLAGS) -c main.t.cpp
impl.t.o: impl.t.h impl.t.cpp interface.h
	$(CC) $(CFLAGS) -c impl.t.cpp
user.o: user.h user.cpp
	$(CC) $(CFLAGS) -c user.cpp
.PHONY: clean
clean:
	rm -rf $(OBJS) $(EXE) *~ $(TOBJS) $(TEXE)
