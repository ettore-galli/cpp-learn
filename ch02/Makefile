cpp_version = -std=c++2a 
includes = /usr/local/include/fmt
link = /usr/local/lib/

hw:
	g++ $(cpp_version) -I $(includes) -L $(link)  hw.cpp -o hw
 

pointers-compile:
	g++ $(cpp_version) -I $(includes) -L $(link)  pointers.cpp -o pointers

pointers-run:
	./pointers

pt: pointers-compile pointers-run