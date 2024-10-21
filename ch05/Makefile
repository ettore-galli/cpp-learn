cpp_version = -std=c++2a 
includes = /usr/local/include/fmt
link = /usr/local/lib/

compile:
	g++ $(cpp_version) -I $(includes) -L $(link) ch05.cpp -o ch05
 
run:
	./ch05

compilep:
	g++ $(cpp_version) -I $(includes) -L $(link) primes.cpp -o primes
 
runp:
	./primes

ch: compile run 

chp: compilep runp  