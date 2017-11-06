#include <stdio.h>


int main2(void)
{
	int podatak1, rijec1;
	short podatak2, rijec2;
	FILE *fd;
	fd=fopen("datoteka.bin", "wb+");

	rijec1=1010;
	write_word(fd, rijec1);

	podatak1=read_word(fd);
	printf("Procitani podatak: %d \n", podatak1);

	rijec2=10001;
	write_half(fd, rijec2);

	podatak2=read_half(fd);
	printf("Procitani podatak: %hd \n", podatak2);
	
	return 0;
}
