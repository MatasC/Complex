complex: Complex_function.o
	g++ -o test Complex_main.cpp Complex_function.o
	./test
valymas:
	rm *.o  