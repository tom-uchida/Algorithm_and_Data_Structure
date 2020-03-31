# How to use:  
# 	make 
# 	make clean

CGLAB_MUST=-Wall -O3

hello:hello.o
	g++ $(CGLAB_MUST) -o hello hello.o

hello.o:hello.cpp
	g++ $(CGLAB_MUST) -c hello.cpp

clean:
	rm -f hello.o hello