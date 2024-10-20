cpp_version = -std=c++2a 
includes = /usr/local/include/fmt
link = /usr/local/lib/

compile:
	g++ $(cpp_version) -I $(includes) -L $(link) ch04.cpp -o ch04
 
run:
	./ch04

compile-libcard:
	g++ $(cpp_version) -I $(includes) -L $(link) libcard.cpp -o libcard
 
run-libcard:
	./libcard

ch: compile run 

lc: compile-libcard run-libcard
 