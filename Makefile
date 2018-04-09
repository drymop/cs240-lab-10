EXECS = tester
OBJS = Person.o Student.o

CC = g++
CCFLAGS = -std=c++11 -Wall -g

all: $(EXECS)

tester: $(OBJS)
        $(CC) $(CCFLAGS) $^ -o $@

%.o: %.cpp *.h
        $(CC) $(CCFLAGS) -c $<

%.o: %.cpp
        $(CC) $(CCFLAGS) -c $<

clean:
        /bin/rm -f a.out $(OBJS) $(EXECS)