cpp_version = -std=c++2a 
includes = /usr/local/include/fmt
link = /usr/local/lib/

compile:
	g++ $(cpp_version) -I $(includes) -L $(link) ch09.cpp -o ch09
	echo "Compilation ended."
 
run:
	./ch09
	echo "Run ended."

compilec:
	g++ $(cpp_version) -I $(includes) -L $(link) challenge.cpp -o challenge
	echo "Compilation ended."
 
runc:
	./challenge
	echo "Run ended."


ch: compile run 

chc: compilec runc 

 