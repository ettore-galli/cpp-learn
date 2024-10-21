cpp_version = -std=c++2a 
includes = /usr/local/include/fmt
link = /usr/local/lib/

compile:
	g++ $(cpp_version) -I $(includes) -L $(link) ch06.cpp -o ch06
 
run:
	./ch06

compilef:
	g++ $(cpp_version) -I $(includes) -L $(link) fact.cpp -o fact
 
runf:
	./fact

ch: compile run 

chf: compilef runf  