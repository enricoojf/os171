#include <stdio.h>

char varchar0='a';
char varchar1='b';
char varchar2='c';
char varchar3='d';

char* ptrchr0=&varchar0;
char* ptrchr1=&varchar1;
char* ptrchr2=&varchar2;
char* ptrchr3=&varchar3;

char** ptrptr0=&ptrchr0;
char** ptrptr1=&ptrchr1;
char** ptrptr2=&ptrchr2;
char** ptrptr3=&ptrchr3;

char*** ultimate_pointer = &ptrptr0; 

void main(void){
	printf("varchar0: val=%c, adr=%p\n",varchar0, &varchar0);
	printf("varchar1: val=%c, adr=%p\n",varchar1, &varchar1);
	printf("varchar2: val=%c, adr=%p\n",varchar2, &varchar2);
	printf("varchar3: val=%c, adr=%p\n",varchar3, &varchar3);
	
	printf("================================================ \n");

	printf("ptrchr0: pts=%c, val=%p, adr=%p\n", *ptrchr0, ptrchr0, &ptrchr0);
	printf("ptrchr1: pts=%c, val=%p, adr=%p\n", *ptrchr1, ptrchr1, &ptrchr1);
	printf("ptrchr2: pts=%c, val=%p, adr=%p\n", *ptrchr2, ptrchr2, &ptrchr2);
	printf("ptrchr3: pts=%c, val=%p, adr=%p\n", *ptrchr3, ptrchr3, &ptrchr3);
	
	printf("================================================ \n");
		
	printf("ptrptr0: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr0, *ptrptr0,ptrptr0, &ptrptr0);
	printf("ptrptr0: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr1, *ptrptr1,ptrptr1, &ptrptr1);
	printf("ptrptr0: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr2, *ptrptr2,ptrptr2, &ptrptr2);
	printf("ptrptr0: ppt=%c, pts=%p, val=%p, adr=%p\n", **ptrptr3, *ptrptr3,ptrptr3, &ptrptr3);
	
	printf("================================================ \n");
	printf("Ultimate Variable \n");
	printf("================================================ \n");

	printf("val=%p, adr=%p, ult0=%c, ultult0=%c, ultultult0=%c \n", ultimate_pointer, &ultimate_pointer, *ultimate_pointer, **ultimate_pointer, ***ultimate_pointer);

}
