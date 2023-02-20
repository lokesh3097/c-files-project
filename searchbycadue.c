#include <stdio.h>
#include <dos.h>
#include "CAS.h"

void searchcadue()
{
    int curcount();
    int dd,mm,yy;
    char tempdate[15];
    extern int ne;
    int i,flag=0;
    FILE *tmp;
    extern FILE*cur;
    extern CAS c;
    printf("Enter Calibration due date of the Device(DD/MM/YYYY) : ");
    fflush(stdin);
    //fgets(tempnum,10,stdin);
    //conversion of string date into numerical dates
    nd=curcount();
    if(nd==0)
    {
      printf("No Records to Search");
      return;
    }
    cur=fopen("EMPDATA.dat","rb");
    tmp=fopen("E:\\txt5.dat","wb");
    for(i=0; i<nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(yy==c.cadue_y)
		{
			if(mm==c.cadue_m)
			{
				if(dd==c.cadue_d)
				{
					fwrite(&c,sizeof(CAS),1,tmp);
					flag=1;
				}
			}
		}
    }
    if(flag==0)
    {
      	printf("Device with the specified Calibration Due Date could not be found,Please try again");
        fclose(cur);
    	fclose(txt);
      	return;
    }
    //display the content of txt.dat
    fclose(cur);
    fclose(txt);
    return;
}
