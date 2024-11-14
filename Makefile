all: a.out

a.out:
	$(CXX) test.cpp

clean:
	rm -f a.out
