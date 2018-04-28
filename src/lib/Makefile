src = $(wildcard *.cc)
obj = $(src:.cc=.o)

CXXFLAGS = -Wall -Wextra -pedantic -Werror -std=c++17 -I../lib/ -I./include/

%.o: %.c
	$(CXX) -c -o $@ $< $(CXXFLAGS)

libterrenus.a: $(obj)
	ar rvs $@ $^

all: libterrenus.a

clean:
	$(RM) -f $(obj) libterrenus.a
