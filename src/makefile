all: dirbin ./bin/server ./bin/client
	
dirbin:
	mkdir bin -p

./bin/server: server.cpp
	g++ server.cpp -lboost_system -o ./bin/server #-O3 -std=c++11 

./bin/client: client.cpp
	g++ client.cpp -lboost_system -o ./bin/client #-O3 -std=c++11 