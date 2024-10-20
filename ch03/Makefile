cpp_version = -std=c++2a 
includes = /usr/local/include/fmt
link = /usr/local/lib/

compile:
	g++ $(cpp_version) -I $(includes) -L $(link) ch03.cpp -o ch03

compilestr:
	g++ $(cpp_version) -I $(includes) -L $(link) ch03str.cpp -o ch03str

run:
	./ch03

runstr:
	./ch03str

ch: compile run 
chstr: compilestr runstr 