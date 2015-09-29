CC=g++
CFLAGS=-Wall -Werror -O2 --std=c++11
COMMON=user.o main.o
OBJS=$(COMMON) impl.o
EXE=concrete_impl.out
TEXE=test_impl.out
TOBJS=$(COMMON) impl.t.o

all: $(EXE) $(TEXE)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJS)
$(TEXE): $(TOBJS)
	$(CC) $(CFLAGS) -o $(TEXE) $(TOBJS)
main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp
impl.o: impl.h concrete/impl.cpp
	$(CC) $(CFLAGS) -c concrete/impl.cpp
impl.t.o: impl.h testimpl/impl.t.cpp
	$(CC) $(CFLAGS) -c testimpl/impl.t.cpp
user.o: user.h user.cpp
	$(CC) $(CFLAGS) -c user.cpp
# impl.so: concrete/impl.cpp concrete/impl.h
# 	$(CC) $(CFLAGS) -fPIC -c concrete/impl.cpp
# 	$(CC) $(CFLAGS) -shared -Wl,-soname,libimpl.so -o concrete/impl.o
.PHONY: clean
clean:
	rm -rf $(OBJS) $(EXE) *~ $(TOBJS) $(TEXE)
