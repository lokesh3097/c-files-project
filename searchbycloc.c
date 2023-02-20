#include <stdio.h>
#include <dos.h>
#include "CAS.h"

void searchcloc()
{
    int curcount();
    FILE *tmp;
    char temploc[20];
    extern int ne;
    int i,flag=0;
    extern FILE*cur;
    extern CAS c;
    printf("Enter Location of the Customer : ");
    fflush(stdin);
    //fgets(temploc,10,stdin);
    nd=curcount();
    if(nd==0)
    {
      printf("No Records to Search");
      return;
    }
    cur=fopen("EMPDATA.dat","rb");
    tmp=fopen("E:\\txt1.dat","wb");
    for(i=0; i<nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(stricmp(temploc,c.cloc)==0)
		{
			fwrite(&c,sizeof(CAS),1,tmp);
			flag=1;
		}
    }
    if(flag==0)
    {
      	printf("There is no customer in the specified Location,Please try again");
      	fclose(cur);
    	fclose(txt);
      	return;
    }
    //display the content of txt.dat
    fclose(cur);
    fclose(txt);
    return;
}
