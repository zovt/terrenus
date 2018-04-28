src = $(wildcard *.cc)
obj = $(src:.cc=.o)

CXXFLAGS = -Wall -Wextra -pedantic -Werror -std=c++17 -I../lib/ -I./include/
LDFLAGS =

.catch2:
	mkdir -p include
	curl -L https://github.com/catchorg/Catch2/releases/download/v2.2.2/catch.hpp -o include/catch.hpp
	curl -L https://github.com/catchorg/Catch2/releases/download/v2.2.2/catch_reporter_automake.hpp -o include/catch_reporter_automake.hpp
	curl -L https://github.com/catchorg/Catch2/releases/download/v2.2.2/catch_reporter_tap.hpp -o include/catch_reporter_tap.hpp
	curl -L https://github.com/catchorg/Catch2/releases/download/v2.2.2/catch_reporter_teamcity.hpp -o include/catch_reporter_teamcity.hpp
	touch .catch2

deps: .catch2

%.o: %.c
	$(CXX) -c -o $@ $< $(CXXFLAGS)

terrenus-test: $(obj)
	$(CXX) -o $@ $^ ../lib/libterrenus.a $(CXXFLAGS) $(LDFLAGS)

all: terrenus-test

clean:
	$(RM) -f $(obj) terrenus-test

run: all
	./terrenus-test
