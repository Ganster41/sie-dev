

#ifndef __LOADER_H__
#define __LOADER_H__

/** includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elf.h"


typedef struct
{
	unsigned int elfSize;
	char *bin;
	Elf32_Ehdr *ehdr;
	char *physAdr;
	unsigned int binarySize;
} Elf32_Exec;

char isElfValid(Elf32_Ehdr *ehdr);
int elf_to_binary(char *data, int size);
void *readSegments(Elf32_Exec *ex);
int calculateBinarySize(Elf32_Exec *ex);


void dump(Elf32_Ehdr *ehdr);
void dump(Elf32_Phdr *p);

#endif