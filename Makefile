
all:
	gcc -Wall -pedantic -ansi -shared -ldl -fPIC -o fuuuu.so fuuuu.c
	gcc -o segfault_test segfault_test.c

clean:
	rm -f segfault_test	
	rm -f fuuuu.so

