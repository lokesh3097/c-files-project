#include <stdio.h>
#include <dos.h>
#include "CAS.h"

void autoalert()
{
    int curcount();
 	struct date d;
 	int yy,mm,,dd;
    char tempdate[15];
    extern int ne;
    int i,flag=0;
    FILE *tmp;
    extern FILE*cur;
    extern CAS c;
    getdate(&d);
    dd=d.da_date;
    mm=d.da_mon;
    yy=d.da_year;
    nd=curcount();
    if(nd==0)
    {
      printf("No Records to Search");
      return;
    }
    cur=fopen("EMPDATA.dat","rb");
    tmp=fopen("E:\\txt8.dat","wb");
    //1st day
    for(i=0; i<nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(yy==c.purd_y)
		{
			if(mm==c.purd_m)
			{
				if(dd==c.purd_d)
				{
					fwrite(&c,sizeof(CAS),1,tmp);
					flag=1;
				}
			}
		}
    }
    dd++;
    if((mm==4||mm==6||mm==9||mm==11)&&dd>30)
    {
    	dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)&&dd>31)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==2)&&((yy%4==0&&yy%100!=0)||yy%400==0))
	{
		if(dd>29)
		{
			dd=0;
    		mm++;
	    	if(mm>12)
	    	{
	    		mm=0;
	    		yy++;
			}
		}
	}
	else if(mm==2 && dd>28)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	//2nd day
	fseek(cur,0,SEEK_SET);
	for(i=0; i<nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(yy==c.purd_y)
		{
			if(mm==c.purd_m)
			{
				if(dd==c.purd_d)
				{
					fwrite(&c,sizeof(CAS),1,tmp);
					flag=1;
				}
			}
		}
    }
    dd++;
    if((mm==4||mm==6||mm==9||mm==11)&&dd>30)
    {
    	dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)&&dd>31)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==2)&&((yy%4==0&&yy%100!=0)||yy%400==0))
	{
		if(dd>29)
		{
			dd=0;
    		mm++;
	    	if(mm>12)
	    	{
	    		mm=0;
	    		yy++;
			}
		}
	}
	else if(mm==2 && dd>28)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	//3rd day
		fseek(cur,0,SEEK_SET);
	for(i=0; i<nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(yy==c.purd_y)
		{
			if(mm==c.purd_m)
			{
				if(dd==c.purd_d)
				{
					fwrite(&c,sizeof(CAS),1,tmp);
					flag=1;
				}
			}
		}
    }
    dd++;
    if((mm==4||mm==6||mm==9||mm==11)&&dd>30)
    {
    	dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)&&dd>31)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==2)&&((yy%4==0&&yy%100!=0)||yy%400==0))
	{
		if(dd>29)
		{
			dd=0;
    		mm++;
	    	if(mm>12)
	    	{
	    		mm=0;
	    		yy++;
			}
		}
	}
	else if(mm==2 && dd>28)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	//4th day
		fseek(cur,0,SEEK_SET);
	for(i=0; i<nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(yy==c.purd_y)
		{
			if(mm==c.purd_m)
			{
				if(dd==c.purd_d)
				{
					fwrite(&c,sizeof(CAS),1,tmp);
					flag=1;
				}
			}
		}
    }
    dd++;
    if((mm==4||mm==6||mm==9||mm==11)&&dd>30)
    {
    	dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)&&dd>31)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==2)&&((yy%4==0&&yy%100!=0)||yy%400==0))
	{
		if(dd>29)
		{
			dd=0;
    		mm++;
	    	if(mm>12)
	    	{
	    		mm=0;
	    		yy++;
			}
		}
	}
	else if(mm==2 && dd>28)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	//5th day
		fseek(cur,0,SEEK_SET);
	for(i=0; i<nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(yy==c.purd_y)
		{
			if(mm==c.purd_m)
			{
				if(dd==c.purd_d)
				{
					fwrite(&c,sizeof(CAS),1,tmp);
					flag=1;
				}
			}
		}
    }
    dd++;
    if((mm==4||mm==6||mm==9||mm==11)&&dd>30)
    {
    	dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)&&dd>31)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==2)&&((yy%4==0&&yy%100!=0)||yy%400==0))
	{
		if(dd>29)
		{
			dd=0;
    		mm++;
	    	if(mm>12)
	    	{
	    		mm=0;
	    		yy++;
			}
		}
	}
	else if(mm==2 && dd>28)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	//6th day
		fseek(cur,0,SEEK_SET);
	for(i=0; i<nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(yy==c.purd_y)
		{
			if(mm==c.purd_m)
			{
				if(dd==c.purd_d)
				{
					fwrite(&c,sizeof(CAS),1,tmp);
					flag=1;
				}
			}
		}
    }
    dd++;
    if((mm==4||mm==6||mm==9||mm==11)&&dd>30)
    {
    	dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)&&dd>31)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==2)&&((yy%4==0&&yy%100!=0)||yy%400==0))
	{
		if(dd>29)
		{
			dd=0;
    		mm++;
	    	if(mm>12)
	    	{
	    		mm=0;
	    		yy++;
			}
		}
	}
	else if(mm==2 && dd>28)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	//7th day
		fseek(cur,0,SEEK_SET);
	for(i=0; i<nd; i++)
    {
		fread(&c,sizeof(CAS),1,cur);
		if(yy==c.purd_y)
		{
			if(mm==c.purd_m)
			{
				if(dd==c.purd_d)
				{
					fwrite(&c,sizeof(CAS),1,tmp);
					flag=1;
				}
			}
		}
    }
    dd++;
    if((mm==4||mm==6||mm==9||mm==11)&&dd>30)
    {
    	dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)&&dd>31)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	else if((mm==2)&&((yy%4==0&&yy%100!=0)||yy%400==0))
	{
		if(dd>29)
		{
			dd=0;
    		mm++;
	    	if(mm>12)
	    	{
	    		mm=0;
	    		yy++;
			}
		}
	}
	else if(mm==2 && dd>28)
	{
		dd=0;
    	mm++;
    	if(mm>12)
    	{
    		mm=0;
    		yy++;
		}
	}
	if(flag==1)
	{
		clrscr();
		printf("\t\t\tTHE DEVICES TO BE CALIBRATED IN THE COMING 7 DAYS ARE\n\n")
    	//display the content of txt.dat
	}
	else if(flag==0)
	{
		printf("\nThere are no devices to be calibrated in this week\n")
	}
    fclose(cur);
    fclose(txt);
    return;
}
