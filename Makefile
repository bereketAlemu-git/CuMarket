all: a1

a1: main.cc Category.o CuMarket.o Listing.o Price.o User.o Tester.o
	g++ -o a1 main.cc Category.o CuMarket.o Listing.o Price.o User.o Tester.o
Tester.o: Tester.cc Tester.h
	g++ -c Tester.cc

Category.o: Category.cc Category.h
	g++ -c Category.cc

CuMarket.o: CuMarket.cc CuMarket.h
	g++ -c CuMarket.cc	

Listing.o: Listing.cc Listing.h
	g++ -c Listing.cc

Price.o: Price.cc Price.h 
	g++ -c Price.cc

User.o: User.cc User.h
	g++ -c User.cc

clean:
	rm -f *.o a1
