cc = g++  # use g++ compiler

flags = -std=c++11  # compile with C++ 11 standard
flags += -Wall      # compile with all warnings
flags += -I .
flags += -g

link = $(cc) $(flags) -o  # final linked build to binary executable

compile = $(cc) $(flags) -c -o  # compilation to intermediary .o files

bin/test-word-finder : bin/test-word-finder.o bin/word-finder.o
	$(link) $@ $^

bin/test-word-finder.o : src/test_word_finder.cc inc/test_word_finder.h \
                         inc/word_finder.h
	$(compile) $@ $<

bin/word-finder.o : src/word_finder.cc inc/word_finder.h
	$(compile) $@ $<

clean:
	@rm -f bin/*
