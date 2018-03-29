#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include "wav.h"

int main()
{
	FILE *fin, *fout;
	char ch_buffer[64], ch;
	int num;
	int8_t i;
	fin = fopen("tst.txt", "rb");
    fout = fopen("onlyADPCM.bin", "wb");
    if(fin==NULL)
    {
        printf("Error");
        exit(1);
    }
    fread(ch_buffer, sizeof(ch), 1,fin);
/*
    for(i=0;i<64;i++)
    {
        printf("%x ", ch[i]);
    }


    for(i=0;i<100;i++)
    {
        ch = fgetc(fin);
        num = (int8_t) ch;
        printf("%c, %u\n", ch, num);
        fprintf(fout,"%u", num);
    }

*/
    return 1;
}


