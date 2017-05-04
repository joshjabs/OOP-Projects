CXXFLAGS=-g -Iinclude -std=c++11
LDFLAGS=

all : bin/app

tmp/Person.o : src/Person.cpp include/Person.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Student.o : src/Student.cpp include/Student.h include/Person.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/main.o : src/main.cpp include/Student.h include/Person.h include/Person.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/app : tmp/main.o tmp/Person.o tmp/Student.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
