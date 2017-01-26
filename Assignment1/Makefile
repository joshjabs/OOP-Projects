CXXFLAGS=-g -Iinclude
LDFLAGS=

all : bin/app

tmp/Shape.o : src/Shape.cpp include/Shape.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Rectangle.o : src/Rectangle.cpp include/Rectangle.h include/Shape.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/main.o : src/main.cpp include/Rectangle.h include/Shape.h include/Shape.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/app : tmp/main.o tmp/Shape.o tmp/Rectangle.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
