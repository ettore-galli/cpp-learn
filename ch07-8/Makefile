cpp_version = -std=c++2a 
includes = /usr/local/include/fmt
link = /usr/local/lib/

compile:
	g++ $(cpp_version) -I $(includes) -L $(link) ch07.cpp -o ch07
 
run:
	./ch07

compilec:
	g++ $(cpp_version) -I $(includes) -L $(link) challenge.cpp -o challenge
 
runc:
	./challenge


compiler:
	g++ $(cpp_version) -I $(includes) -L $(link) rational.cpp -o rational
 
runr:
	./rational

ch: compile run 

chc: compilec runc 

chr: compiler runr 