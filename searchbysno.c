#include <stdio.h>
#include <dos.h>
#include "CAS.h"

void searchse()
{
    int curcount();
    char tempse[10];
    extern int ne;
    int i,flag=0;
    extern FILE*cur;
    extern CAS c;
    printf("Enter Serial Number of the Device : ");
    fflush(stdin);
    //fgets(tempid,10,stdin);
    nd=curcount();
    if(nd==0)
    {
      printf("No Records to Search");
      return;
    }
    cur=fopen("EMPDATA.dat","rb");
    for(i=1; i<=nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(stricmp(temps,c.sno)==0)
		{
			printf("\nSerial Number : %s\n",c.sno);
			printf("\nSerial Number : %s\n",c.sno);
			printf("\nSerial Number : %s\n",c.sno);
			printf("\nSerial Number : %s\n",c.sno);
			printf("\nSerial Number : %s\n",c.sno);
			printf("\nSerial Number : %s\n",c.sno);
			printf("\nSerial Number : %s\n",c.sno);
			printf("\nSerial Number : %s\n",c.sno);
			printf("\nSerial Number : %s\n",c.sno);
			printf("\nSerial Number : %s\n",c.sno);
			printf("\nSerial Number : %s\n",c.sno);
			printf("\nSerial Number : %s\n",c.sno);
			flag=1;
			break;
		}
    }
    fclose(cur);
    if(flag==0)
    {
      printf("Device with the specified Serial Number could not be found");
      return;
    }
    return;
}
