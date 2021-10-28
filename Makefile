CREATEVAR = g++

RM = rm -f

FLAGS = -Wall -c -I include/

main: main.o calculator.o
	$(CREATEVAR) $? -o $@

calculator.o: calculator.cpp include/calculator.h
	$(CREATEVAR) $(FLAGS) calculator.cpp -o $@

main.o: main.cpp include/calculator.h
	$(CREATEVAR) $(FLAGS) main.cpp -o $@

clean:
	$(RM) *.o main