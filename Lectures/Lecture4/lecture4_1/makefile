cc = g++  # use g++ compiler

flags = -std=c++17  # compile with C++ 17 standard
flags += -Wall      # compile with all warnings
flags += -I .       # compile with PWD appended to compiler library path
flags += -g         # compile with debug information

link = $(cc) $(flags) -o  # compile, assemble, link
compile = $(cc) $(flags) -c  # compile, assemble, do not link

bin/arrays : bin/arrays.o
	$(link) $@ $^
bin/arrays.o : src/arrays.cc
	$(compile) $^ -o $@

bin/undef-ind : bin/undef-ind.o
	$(link) $@ $^
bin/undef-ind.o : src/undef_ind.cc
	$(compile) $^ -o $@

bin/str-proc : bin/str_proc.o
	$(link) $@ $^
bin/str_proc.o : src/str_proc.cc
	$(compile) $^ -o $@

bin/dyna-arrays : bin/dyna-arrays.o
	$(link) $@ $^
bin/dyna-arrays.o : src/dyna_arrays.cc
	$(compile) $^ -o $@

bin/func : bin/func.o
	$(link) $@ $^
bin/func.o : src/func.cc inc/func.h
	$(compile) $^ -o $@

bin/multi-arrays : bin/multi-arrays.o
	$(link) $@ $^
bin/multi-arrays.o : src/multi_arrays.cc
	$(compile) $^ -o $@

all : bin/arrays bin/undef-ind bin/str-proc bin/dyna-arrays bin/func bin/mult-arrays
	@echo All apps made

clean:
	@rm -f bin/*
