main: main.o 
	g++ -o main main.o 

main.o: main.cpp vector.h vector.cxx
	g++ -c main.cpp

clean:
	rm -f main.o vector.o 