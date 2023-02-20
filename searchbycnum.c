#include <stdio.h>
#include <dos.h>
#include "CAS.h"

void searchcname()
{
    int curcount();
    char tempnum[20];
    extern int ne;
    int i,flag=0;
    FILE *tmp;
    extern FILE*cur;
    extern CAS c;
    printf("Enter Contact Number of the Customer : ");
    fflush(stdin);
    //fgets(tempnum,10,stdin);
    nd=curcount();
    if(nd==0)
    {
      printf("No Records to Search");
      return;
    }
    cur=fopen("EMPDATA.dat","rb");
    tmp=fopen("E:\\txt3.dat","wb");
    for(i=0; i<nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(stricmp(tempname,c.cnum)==0)
		{
			fwrite(&c,sizeof(CAS),1,tmp);
			flag=1;
		}
    }
    if(flag==0)
    {
      	printf("Customer with the specified Contact Number could not be found,Please try again");
      	fclose(cur);
    	fclose(txt);
      return;
    }
    //display the content of txt.dat
    fclose(cur);
    fclose(txt);
    return;
}
