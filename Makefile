
all:
	gcc -Wall -pedantic -ansi -shared -ldl -fPIC -o fuuuu.so fuuuu.c
	gcc -Wall -pedantic -ansi -shared -ldl -fPIC -o fuuuu-ascii.so fuuuu-ascii.c
	gcc -o segfault_test segfault_test.c

clean:
	rm -f segfault_test	
	rm -f fuuuu.so
	rm -f fuuuu-ascii.so

