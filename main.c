#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

int main(int argc, char *argv[])
{
	FILE *fin, *fout;
	char ch[64];
	int num;
	int8_t i;
	fin = fopen("SlitWristTheory.wav", "rb");
    fout = fopen("onlyADPCM.bin", "wb");

    fread(ch, sizeof(ch), 1,fin);

    for(i=0;i<64;i++)
    {
        printf("%x ", ch[i]);
    }

/*
	if(fin==NULL)
    {
        printf("Error");
        exit(1);
    }
    for(i=0;i<100;i++)
    {
        ch = fgetc(fin);
        num = (int8_t) ch;
        printf("%c, %u\n", ch, num);
        fprintf(fout,"%u", num);
    }
    */
}



