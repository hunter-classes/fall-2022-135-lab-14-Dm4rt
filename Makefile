main: main.o MyVector.o
	g++ -o main main.o MyVector.o
tests: tests.o MyVector.o
	g++ -o tests tests.o MyVector.o
main.o: main.cpp MyVector.h

tests.o:tests.cpp MyVector.h

MyVector.o: MyVector.cpp MyVector.h

clean:
	rm -f *o
