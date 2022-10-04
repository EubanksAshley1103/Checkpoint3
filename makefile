carnival: driver.o patron.o ride.o
	g++ -o carnival driver.o patron.o ride.o
driver.o: driver.cpp
	g++ -c driver.cpp
patron.o: patron.cpp patron.h
	g++ -c patron.cpp
ride.o: ride.cpp ride.h
	g++ -c ride.cpp
clean:
	rm *.o carnival
