# Make a compiler variable, named cc
cc = g++

# Make a compiler variable for C++ 17 standard flag named flags
flags = -std=c++17
# Append the "all warnings" flag to variable
flags += -Wall

# Create link variable to compile, assemble, link, and name
link = $(cc) $(flags) -o

# Create variable compile to compile, assemble, but not link
compile = $(cc) $(flags) -c

# cereal_oz_ton rule
#	Dependencies: cereal_oz_to_ton.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^
cereal-oz-ton : cereal_oz_ton.cc
	g++ -std=c++17 -Wall -o cereal-oz-ton cereal_oz_ton.cc

# calc_back_pay rule
#	Dependencies: calc_back_pay.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^
calc-back-pay : calc_back_pay.cc
	$(link) $@ $^

# calc_sqr_root rule
#	Dependencies: calc_sqr_root.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^
calc-sqr-root: calc_sqr_root.cc
	$(link) $@ $^

# calc_caff_death rule
#	Dependencies: calc_caff_death.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^


# Create a rule to clean up object and executable files.
# Dependencies: none
#   Command: rm (make rm silent)
#   Files: prob*
clean :
	@rm -f cereal-oz-ton calc-back-pay calc-sqr-root
