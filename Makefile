WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) 

TESTFLAGS = -DTEST_FUNC
EXEC = prog

SRCS = main.c compare.c wordgen.c
OBJS = $(SRCS:%.c=%.o)

$(EXEC): $(OBJS)
	$(GCC) $(TESTFLAGS) $(OBJS) -o $(EXEC)

.c.o:
	$(GCC) $(TESTFLAGS) -c $*.c

testall: test1 test2 test3

test1: $(EXEC)
	./$(EXEC) 2 3 7 > output1
	diff -w output1 testcases/expected1

test2: all
	./$(EXEC) 4 6 1 > output2
	diff -w output2 testcases/expected2

test3: all
	./$(EXEC) 20 5 7 > output3
	diff -w output3 testcases/expected3

clean:
	rm -f $(EXEC) *.o output*
