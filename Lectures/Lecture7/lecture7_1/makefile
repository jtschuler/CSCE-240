# Copyright 2020  CSCE240
cc = g++  # use g++ compiler

flags = -std=c++17  # compile with C++ 17 standard
flags += -Wall      # compile with all warnings
flags += -g         # produce debugging information
flags += -I .       # add pwd directory to src include path

link = $(cc) $(flags) -o
compile = $(cc) $(flags) -c

test-queue: bin/test-queue.o bin/queue.o
	$(link) $@ $^
test-stack: bin/test-stack.o bin/stack.o
	$(link) $@ $^

bin/test-queue.o : test/src/queue.cc test/inc/queue.h inc/queue.h
	$(compile) $< -o $@
bin/test-stack.o : test/src/stack.cc test/inc/stack.h inc/stack.h
	$(compile) $< -o $@

bin/queue.o : src/queue.cc inc/queue.h
	$(compile) $< -o $@
bin/stack.o : src/stack.cc inc/stack.h
	$(compile) $< -o $@

style : src/*.cc inc/*.h
	cpplint --root=./ $^

clean:
	@rm -f bin/* test-stack test-queue
