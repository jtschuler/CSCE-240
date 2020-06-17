# Styled using suggestions from style-guides.readthedocs.io

cc = g++   # use g++ compiler

flags = -std=c++17  # compile with C++ 17 standard
flags += -Wall      # compile with all warnings
flags += -I .       # compile with inc directory appended to path

link = $(cc) $(flags) -o        # compile and link for executable binary
compile = $(cc) $(flags) -c -o  # compile into intermediary binary


# Test All
#
test-all : bin/test-rational-operators \
           bin/test-rational-class \
           bin/test-summation
	@./bin/test-rational-class
	@./bin/test-rational-operators
	@./bin/test-summation
	@echo ALL TESTS PASSED


# Test Summation memory usage
#
test-summation-memory: bin/test-summation
	valgrind --leak-check=full --error-exitcode=1 ./$<


# Summation Class
#
bin/test-summation : bin/summation.o bin/rational.o bin/test-summation.o
	$(link) $@ $^

bin/test-summation.o : src/test_summation.cc inc/summation.h inc/rational.h
	$(compile) $@ $<

bin/summation.o : src/summation.cc inc/summation.h inc/rational.h
	cpplint --root=. $^
	$(compile) $@ $<


# Rational Overloaded Operators
#
bin/test-rational-operators : bin/rational.o bin/test-rational-operators.o
	$(link) $@ $^

bin/test-rational-operators.o : src/test_rational_operators.cc \
                                inc/test_rational.h \
                                inc/rational.h
	$(compile) $@ $<


# Rational Class
#
bin/test-rational-class : bin/rational.o bin/test-rational-class.o
	$(link) $@ $^

bin/test-rational-class.o : src/test_rational_class.cc \
                            inc/test_rational.h \
                            inc/rational.h
	$(compile) $@ $<

bin/rational.o : src/rational.cc inc/rational.h
	cpplint --root=. $^
	$(compile) $@ $<


clean:
	@rm -f bin/*
