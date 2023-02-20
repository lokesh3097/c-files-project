#include <stdio.h>
#include <dos.h>
#include "CAS.h"

void modify()
{
    int curcount();
    FILE *tmp;
    char tempsn[20],t[20];
    extern int ne;
    int i,ch,flag=0;
    extern FILE*cur;
    extern CAS c;
    printf("Enter Serial Number of the device you want to modify : ");
    fflush(stdin);
    //fgets(tempsn,10,stdin);
    nd=curcount();
    if(nd==0)
    {
      printf("No Records to Search");
      return;
    }
    cur=fopen("EMPDATA.dat","rb");
    for(i=0; i<nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(stricmp(tempsn,c.cname)==0)
		{
			flag=1;
			break;
		}
    }
    fseek(cur,-1,SEEK_CUR);
    printf("\n1-To modify Name of the customer : \n");
    printf("\n2-To modify Contact Number of the customer : \n");
    printf("\n3-To modify Location of the customer : \n");
    printf("\n4-To modify Email of the customer : \n");
    printf("\n5-To modify Date of Calibration of the device : \n");
	printf("\n\n\tEnter your choice : ");
	fflush(stdin);
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 :	printf("\nEnter NEW Name of the customer : ");
					fflush(stdin);
					gets(c.cname);
					break;
		case 2 :	printf("\nEnter NEW Conatact Number of the customer : ");
					fflush(stdin);
					gets(c.cnum);
					break;
		case 3 :	printf("\nEnter NEW Location of the customer : ");
					fflush(stdin);
					gets(c.cloc);
					break;
		case 4 :	printf("\nEnter NEW Email of the customer : ");
					fflush(stdin);
					gets(c.cemail);
					break;
		case 5 :	printf("\nEnter NEW Date of Calibration of the device : ");
					fflush(stdin);
					gets(t);
					//convert string date into int date & store then in different values of 'c'
					t[0]='\0';
					printf("\nEnter NEW Calibration Due Date of the device : ");
					fflush(stdin);
					gets(t);
					//convert string date into int date & store then in different values of 'c'
					break;
		default :	printf("\nPlease select a valid choice\n")
	}
    if(flag==0)
    {
      printf("Customer with the specified name could not be found,Please try again");
      fclose(cur);
      return;
    }
    fwrite(&c,sizeof(CAS),1,cur);
	fclose(cur);
    return;
}
