cc = g++  # use g++ compiler

flags = -std=c++17  # compile with C++ 17 standard
flags += -Wall      # compile with all warnings
flags += -I .       # compile with PWD appended to compiler library path
flags += -g         # compile with debug information

link = $(cc) $(flags) -o  # compile, assemble, link
compile = $(cc) $(flags) -c  # compile, assemble, do not link

intro : intro.cc
	$(link) $@ $^

output_params: output_params.o
	$(link) $@ $^
output_params.o: output_params.cc
	$(compile) $<

tight_vector.o : tight_vector.cc tight_vector.h
	$(compile) $<

clean:
	@rm -f intro output_params *.o 
