#include <stdio.h>
#include <io.h>

int read_word(FILE *fd)
{
	int procitano;
//	fd=fopen("datoteka.bin", "rb+");
	fread(&procitano, 4, 1, fd);
//	fclose(fd);
	return procitano;

}
short read_half(FILE *fd)
{	
	short procitano;
//	fd=fopen("datoteka.bin", "rb+");
	fread(&procitano, 2, 1, fd);
//	fclose(fd);
	return procitano;
}
void write_word(FILE *fd, int word)
{
//	fd=fopen("datoteka.bin", "wb+");
	fwrite(&word, 4, 1, fd);
//	fclose(fd);
	
}
void write_half(FILE *fd, short word)
{
//	fd=fopen("datoteka.bin", "wb+");
	fwrite(&word, 2, 1, fd);
//	fclose(fd);
}
