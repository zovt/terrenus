src = $(wildcard *.cc)
obj = $(src:.cc=.o)

CXXFLAGS = -Wall -Wextra -pedantic -Werror -std=c++17 -I../lib/

terrenus: $(obj)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LDFLAGS)

all: terrenus

clean:
	rm -f $(obj)
