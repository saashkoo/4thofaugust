#include<stdio.h>
typedef struct Student{
	double grade;
	unsigned int courses_taken;
	char name[7];
	unsigned char age;
}Student ;

int main(){
	Student ss[5];
	ss[0] = (Student){2.3, 300, "ime", 24};
	ss[1] = (Student){1.7, 3030, "ime2", 224};
	ss[2] = (Student){2.6, 3040, "ime3", 214};
	ss[3] = (Student){5.3, 400, "ime4", 25};
	ss[4] = (Student){3.6, 409, "ime5", 26};
	FILE *f = fopen("c_bin.txt", "wb");
	
	fwrite(ss, sizeof(Student), 5, f);
	fclose(f);
	//printf("%lu\n", sizeof(Student));
	FILE *ff = fopen("c_bin.txt", "rb");
	fread(ss, sizeof(Student), 5, ff);//overwrites
	for(int i =0; i<5;i++){printf("%lf, %u, %s, %u\n", ss[i].grade, ss[i].courses_taken, ss[i].name, ss[i].age);}
	fclose(f);
	return 0;
}
