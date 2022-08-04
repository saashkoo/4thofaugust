#include <stdio.h>

int main(){
	FILE * f = fopen("textfile", "wb");
	if(!f){
	fprintf(stderr, "Could not open file\n");
	return -1;
	}
	unsigned int ar[5];
	ar[0] = -2;
	fwrite(ar, sizeof(int), 1, f);
	fclose(f);
	
	/*FILE * ff = fopen("textfile", "rb");
	if(!ff){
	fprintf(stderr, "Could not open file\n");
	return -1;
	}
	char ar[15];
	fread(ar, sizeof(int), 3, ff);
	ar[13] = '\0';
	fwrite(ar, sizeof(int), 13, stdout);
	fclose(f);*/
	return 0;
}
