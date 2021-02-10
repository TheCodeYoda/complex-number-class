a.out : client.o complex.o
	g++ client.o complex.o
client.o : client.cpp complex.h
	   g++ -c client.cpp
complex.o : complex.cpp complex.h
	    g++ -c complex.cpp
