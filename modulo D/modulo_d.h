#ifndef MODULO_D_MODULO_D_H
#define MODULO_D_MODULO_D_H
#include "modulo_d.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/************** SHANNON-FANO ***************/

void initDecompressRLE(char *path_rle);

/* modo == '0', não fazer descompressão RLE */
void decompressSF_RLE(char modo, char *path_shaf);

void moduloD(int argc, char *argv[]);

#endif //MODULO_D_MODULO_D_H