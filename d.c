//#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main(int argc, char* argv[]){
	int fd = open("mytest", O_TRUNC|O_RDWR|O_CREAT);
	write(1, "Hello World!\n", strlen("Hello World!\n"));
	int arr[4] = {52, 48, 57, 48};
	write(fd, arr, 16);
	
	
	int fdd = open(argv[1],O_RDONLY);
	if(fdd<0){write(2, strerror(errno), strlen(strerror(errno)));return 0;}
	int ffd = open(argv[2], O_WRONLY| O_CREAT | O_EXCL, 777);
	if(ffd<0){write(2, strerror(errno), strlen(strerror(errno)));return 0;}
	char a;
	int e;
	do{
		e = read(fdd, &a, 1);
		if(e == -1){
			write(2, strerror(errno), strlen(strerror(errno)));
		}
		if(e == 0){break;}
		e = write(ffd, &a, 1);
		if(e == -1){
			write(2, strerror(errno), strlen(strerror(errno)));
		}
	}
	while(1);
	lseek(fdd, 15, SEEK_SET);
	do{
		e = read(fdd, &a, 1);
		if(e == -1){
			write(2, strerror(errno), strlen(strerror(errno)));
		}
		if(e == 0){break;}
		e = write(ffd, &a, 1);
		if(e == -1){
			write(2, strerror(errno), strlen(strerror(errno)));
		}
	}
	while(1);
	return 0;
}
