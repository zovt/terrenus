bin: lib
	$(MAKE) -C ./src/bin

bin-clean:
	$(MAKE) clean -C ./src/bin

lib:
	$(MAKE) -C ./src/lib

lib-clean:
	$(MAKE) clean -C ./src/lib

test: lib
	$(MAKE) -C ./src/test

test-clean:
	$(MAKE) clean -C ./src/test

test-run: lib
	$(MAKE) run -C ./src/test

clean: bin-clean lib-clean test-clean

all: bin
