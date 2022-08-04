run: build/a.out
	./build/a.out

build/a.out: build
	gcc -c linked_list.c 
	gcc -c a.c 
	gcc a.o linked_list.o -o a.out
	mv linked_list.o a.o a.out ./build
	
clean: build
	rm -r build
	
build: 
	mkdir build
	

