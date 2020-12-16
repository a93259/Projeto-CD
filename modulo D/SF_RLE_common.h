#ifndef SF_RLE_COMMON
#define SF_RLE_COMMON

#include "SF_RLE_common.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define skip_AtSign(fp) fseek(fp,1,SEEK_CUR); /* Dá skip ao '@' */

/*Remove n chars do path
  Exemplo: Se tivermos como inputs path = "aaa.txt.rle" e n = 4, temos como resultado path = "aaa.txt"*/
void removeExtensao(char *path, char **path_new, int n);

void substituiExtensao(char *path, char **path_new, char *ext_new /*nova extensão*/, int n /*tamanho da extensao anterior*/);

/*Verifica se houve compressão RLE*/
char checkRLE(FILE *fp);

/*Descobre nº de blocos em que o ficheiro original/rle foi dividido
  E deixa o fp na posicao ler o tamanho do 1º bloco */
int nrBlocos(FILE *fp);

void tamanhoBloco(FILE *fp, int *tam_bloco);

void skipNrBlocosShaf(FILE *fp);

#endif