#include<mpi.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
int main()
{
clock_t start,end;
    double exectime;

    start=clock();
//Reading CSV File
 char buffer[1024] ;
   char *record,*line;
   int i=0,j=0;
   int mat[100][100];
      FILE *fstream = fopen("service_rating.csv","r+");
   if(fstream == NULL)
   {
      printf("\n file opening failed ");
      return -1 ;
   }
   while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
   {
         j=0;
     record = strtok(line,",");
     while(record != NULL)
     {
//     printf("\t[%d][%d]record : %s",i,j,record) ;    //here you can put the record into the array as per your requirement.
     mat[i][j++] = atoi(record) ;
     record = strtok(NULL,",");
     }
     ++i ;
   }
//Storing the data into array smoke,drink,ambience,hijos,interest,weight,budget,food
float smoke[200],drink[200],ambience[200],hijos[200],interest[200],weight[200],budget[200],service[200];
int a,b;
//printf("\n-------DATA SET:---------\n");
//printf("\nsmoke\tdrink\tambience\thijos\tinterest\tweight\tbudget\tfood");
int k;
for(k=0;k<9000000;k++)
{
}
for(a=1;a<=99;a++)
{
	smoke[a]=mat[a][0];
	drink[a]=mat[a][1];
	ambience[a]=mat[a][2];
	hijos[a]=mat[a][3];
        interest[a]=mat[a][4];
        weight[a]=mat[a][5];
        budget[a]=mat[a][6];
        service[a]=mat[a][7];
	//printf("\n%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",smoke[a],drink[a],ambience[a],hijos[a],interest[a],weight[a],budget[a],food[a]);


}


//Entropy for food     	
	int i1,fn;
        float f1=0,f2=0,f3=0;
        float class=0,p15=0,p16=0,p17=0;
	for(i1=0;i1<33;i1++)
	{
        	if(service[i1]==0)
        	{
                	f1=f1+1;
        	}
	        else if(service[i1]==1)
        	{
                	f2=f2+1;
	        }
        	else
	        {
        	        f3=f3+1;
	        }
		fn=i1;
	}
	printf("\n--------SERVICE RATING PROBABILITY:---------\n");
	p15=f1/33;
	printf("\nProbability of average is :%f",p15);
	p16=f2/33;
	printf("\nProbability of good is :%f",p16);
	p17=f3/33;
	printf("\nProbability of excellent is :%f",p17);
	class=(-p15*(log2(p15)))-(p16*(log2(p16)))-(p17*(log2(p17)));
	printf("\nEntropy for class Service is : %f",class);
//Entropy for Smoke
        float s1=0,s2=0;
        float feature=0,p1=0,p2=0;
for(i1=0;i1<33;i1++)
{        
		if(smoke[i1]==0)
        {
                s1=s1+1;
        }
        else
        {
                s2=s2+1;
        }
			fn=i1;
}
printf("\n");

printf("\n--------SMOKE PROBABILITY:-------\n");
p1=s1/33;
printf("\nProbabilty of no is:%f",p1);
p2=s2/33;
printf("\nProbabilty of yes is:%f",p2);
feature=(-p1*(log2(p1)))-(p2*(log2(p2)));
printf("\nEntropy for feature vector smoke  is : %f",feature);
//Entropy for Drink-Level
       float d1=0,d2=0,d3=0;
       float feature1=0,p3=0,p4=0,p5=0;
for(i1=0;i1<33;i1++)
{
        if(drink[i1]==0)
        {
                d1=d1+1;
        }
        else if(drink[i1]==1)
        {
                d2=d2+1;
        }
        else
        {
               d3=d3+1;
        }
		fn=i1;


}
printf("\n");

printf("\n---------DRINK LEVEL PROBABILITY:-------------\n");
p3=d1/33;
printf("\nProbabilty of abstemious drinker is:%f",p3);
p4=d2/33;
printf("\nProbabilty of social drinker is:%f",p4);
p5=d3/33;
printf("\nProbabilty of casual drinker is:%f",p5);
feature1=(-p3*(log2(p3)))-(p4*(log2(p4)))-(p5*(log2(p5)));
printf("\nEntropy for feature vector drink-level  is : %f",feature1);

	//Entropy for Ambience
  float a1=0,a2=0,a3=0;
  float feature2=0,p6=0,p7=0,p8=0;
for(i1=0;i1<33;i1++)
{
        if(ambience[i1]==0)
        {
                a1=a1+1;
        }
        else if(ambience[i1]==1)
        {
                a2=a2+1;
        }
        else
        {
                a3=a3+1;
        }
}
printf("\n");

printf("\n----------AMBIENCE PROBABILITY:--------\n");
p6=a1/33;
printf("\nProbabilty of family ambience is:%f",p6);
p7=a2/33;
printf("\nProbabilty of friends ambience is:%f",p7);
p8=a3/33;
printf("\nProbabilty of solitary is:%f",p8);
feature2=(-p6*(log2(p6)))-(p7*(log2(p7)))-(p8*(log2(p8)));
printf("\nEntropy for feature vector ambience is : %f",feature2);

//Entropy for Hijos
float h1=0,h2=0,h3=0;
        float feature3=0,p9=0,p10=0,p11=0;
for(i1=0;i1<33;i1++)
{
        if(hijos[i1]==0)
        {
                h1=h1+1;
        }
        else if(hijos[i1]==1)
        {
                h2=h2+1;
        }
        else
        {
                h3=h3+1;
        }
}
printf("\n");
printf("\n-----------HIJOS PROBABILITY:-----------\n");
p9=h1/33;
printf("\nProbabilty of dependent  is:%f",p9);
p10=h2/33;
printf("\nProbabilty of independent  is:%f",p10);
p11=h3/33;
printf("\nProbabilty of kids  is:%f",p11);
feature3=(-p9*(log2(p9)))-(p10*(log2(p10)))-(p11*(log2(p11)));
printf("\nEntropy for feature vector hijos is : %f",feature3);
printf("\n");

//Entropy for Interest
float in1=0,in2=0,in3=0,in4=0,in5=0;
        float feature5=0,p18=0,p19=0,p20=0,p21=0,p22=0;
for(i1=0;i1<33;i1++)
{
        if(interest[i1]==0)
        {
                in1=in1+1;
        }
        else if(interest[i1]==1)
        {
                in2=in2+1;
        }
        else if(interest[i1]==2)
        {
                in3=in3+1;
        }
        else if(interest[i1]==3)
        {
                in4=in4+1;
        }
        else
        {
                in5=in5+1;
        }
}
printf("\n");
printf("\n---------INTEREST PROBABILITY:---------");
printf("\n");
p18=in1/33;
printf("\nProbabilty of variety is:%f",p18);
p19=in2/33;
printf("\nProbabilty of technology is:%f",p19);
p20=in3/33;
printf("\nProbabilty of retro is:%f",p20);
p21=in4/33;
printf("\nProbabilty of echo friendly is:%f",p21);
p22=in5/33;
printf("\nProbabilty of none is:%f",p22);
feature5=(-p18*(log2(p18)))-(p19*(log2(p19)))-(p20*(log2(p20)))-(p21*(log2(p21)))-(p22*(log2(p22)));
printf("\nEntropy for feature vector Interest is : %f",feature5);
printf("\n");
float sgain=0,dgain=0,again=0,hgain=0,igain=0;
sgain=class-feature;
dgain=class-feature1;
again=class-feature2;
hgain=class-feature3;
igain=class-feature5;
printf("\n");
printf("\n--------GAIN--------\n");
printf("\nGain of Smoke-Level:%f",sgain);
printf("\nGain of Drink-Level:%f",dgain);
printf("\nGain of Ambience:%f",again);
printf("\nGain of Hijos:%f",hgain);
printf("\nGain of Interest:%f",igain);
printf("\n");
float sort1[]={sgain,dgain,again,hgain,igain};
	for(i=0;i<5;i++)
	{
		for (j = i + 1; j < 5; ++j) 
		{
			if (sort1[i] < sort1[j]) 
			{
				float temp = sort1[i];
				sort1[i] = sort1[j];
				sort1[j] = temp;
				
			}
		}

	}
        printf("\n------GAIN ACCORDING TO ROOT NODE CLASSIFICATION ----------\n");
	for(i=0;i<5;i++)
	{
		printf("\n%f",sort1[i]);
	}
end=clock();
exectime=(double)(end-start)/CLOCKS_PER_SEC;
printf("\nExecution Time= %fs \n",exectime);
//Entropy for food     	


	f1=0;
	f2=0;
	f3=0;
	for(i1=fn+1;i1<fn+33;i1++)
        {
                if(service[i1]==0)
                {
                        f1=f1+1;
                }
                else if(service[i1]==1)
                {
                        f2=f2+1;
                }
                else
                {
                        f3=f3+1;
                }
                
        }
	p15=0;
	p16=0;
	p17=0;
        printf("\n");

	printf("\n--------SERVICE RATING PROBABILITY:---------\n");
        p15=f1/33;
        printf("\nProbability of average is :%f",p15);
        p16=f2/33;
        printf("\nProbability of good is :%f",p16);
        p17=f3/33;
        printf("\nProbability of excellent is :%f",p17);
        class=(-p15*(log2(p15)))-(p16*(log2(p16)))-(p17*(log2(p17)));
        printf("\nEntropy for class service is : %f",class);

//Entropy for Smoke


	s1=0;
s2=0;
	for(i1=fn+1;i1<fn+33;i1++)
	{
		if(smoke[i1]==0)
        {
                s1=s1+1;
        }
        else
        {
                s2=s2+1;
        }
	}
p1=0;
p2=0;
printf("\n");

printf("\n--------SMOKE PROBABILITY:-------\n");
p1=s1/33;
printf("\nProbabilty of no is:%f",p1);
p2=s2/33;
printf("\nProbabilty of yes is:%f",p2);
feature=(-p1*(log2(p1)))-(p2*(log2(p2)));
printf("\nEntropy for feature vector smoke  is : %f",feature);	

//Entropy for Drink-Level


d1=0;
d2=0;
d3=0;
for(i1=fn+1;i1<fn+33;i1++)
{
	if(drink[i1]==0)
        {
                d1=d1+1;
        }
        else if(drink[i1]==1)
        {
                d2=d2+1;
        }
        else
        {
               d3=d3+1;
        }
}
p3=0;
p4=0;
p5=0;
printf("\n");

printf("\n---------DRINK LEVEL PROBABILITY:-------------\n");
p3=d1/33;
printf("\nProbabilty of abstemious drinker is:%f",p3);
p4=d2/33;
printf("\nProbabilty of social drinker is:%f",p4);
p5=d3/33;
printf("\nProbabilty of casual drinker is:%f",p5);
feature1=(-p3*(log2(p3)))-(p4*(log2(p4)))-(p5*(log2(p5)));
printf("\nEntropy for feature vector drink-level  is : %f",feature1);

//Entropy for Ambience


a1=0;
a2=0;
a3=0;
for(i1=fn+1;i1<fn+33;i1++)
{
	if(ambience[i1]==0)
        {
                a1=a1+1;
        }
        else if(ambience[i1]==1)
        {
                a2=a2+1;
        }
        else
        {
                a3=a3+1;
        }
}
p6=0;
p7=0;
p8=0;
printf("\n");
printf("\n----------AMBIENCE PROBABILITY:--------\n");
p6=a1/33;
printf("\nProbabilty of family ambience is:%f",p6);
p7=a2/33;
printf("\nProbabilty of friends ambience is:%f",p7);
p8=a3/33;
printf("\nProbabilty of solitary is:%f",p8);
feature2=(-p6*(log2(p6)))-(p7*(log2(p7)))-(p8*(log2(p8)));
printf("\nEntropy for feature vector ambience is : %f",feature2);
printf("\n");
	//Entropy for Hijos

h1=0;
h2=0;
h3=0;
for(i1=fn+1;i1<fn+33;i1++)
{
        if(hijos[i1]==0)
        {
                h1=h1+1;
        }
        else if(hijos[i1]==1)
        {
                h2=h2+1;
        }
        else
        {
                h3=h3+1;
        }
}
p9=0;
p10=0;
p11=0;
printf("\n-----------HIJOS PROBABILITY:-----------\n");
p9=h1/33;
printf("\nProbabilty of dependent  is:%f",p9);
p10=h2/33;
printf("\nProbabilty of independent  is:%f",p10);
p11=h3/33;
printf("\nProbabilty of kids  is:%f",p11);
feature3=(-p9*(log2(p9)))-(p10*(log2(p10)))-(p11*(log2(p11)));
printf("\nEntropy for feature vector hijos is : %f",feature3);

	//Entropy for Interest

in1=0;
in2=0;
in3=0;
in4=0;
in5=0;
for(i1=fn+1;i1<fn+33;i1++)
{
if(interest[i1]==0)
        {
                in1=in1+1;
        }
        else if(interest[i1]==1)
        {
                in2=in2+1;
        }
        else if(interest[i1]==2)
        {
                in3=in3+1;
        }
        else if(interest[i1]==3)
        {
                in4=in4+1;
        }
        else
        {
                in5=in5+1;
        }
}
p18=0;
p19=0;
p20=0;
p21=0;
p22=0;
printf("\n");
printf("\n---------INTEREST PROBABILITY:---------\n");
p18=in1/33;
printf("\nProbabilty of variety is:%f",p18);
p19=in2/33;
printf("\nProbabilty of technology is:%f",p19);
p20=in3/33;
printf("\nProbabilty of retro is:%f",p20);
p21=in4/33;
printf("\nProbabilty of echo friendly is:%f",p21);
p22=in5/33;
printf("\nProbabilty of none is:%f",p22);
feature5=(-p18*(log2(p18)))-(p19*(log2(p19)))-(p20*(log2(p20)))-(p21*(log2(p21)))-(p22*(log2(p22)));
printf("\nEntropy for feature vector Interest is : %f",feature5);
printf("\n");
sgain=0;
dgain=0;
again=0;
hgain=0;
igain=0;
sgain=class-feature;
dgain=class-feature1;
again=class-feature2;
hgain=class-feature3;
igain=class-feature5;
printf("\n");
printf("\n--------GAIN--------\n");
printf("\nGain of Smoke-Level:%f",sgain);
printf("\nGain of Drink-Level:%f",dgain);
printf("\nGain of Ambience:%f",again);
printf("\nGain of Hijos:%f",hgain);
printf("\nGain of Interest:%f",igain);
printf("\n");
float sort2[]={sgain,dgain,again,hgain,igain};
	for(i=0;i<5;i++)
	{
		for (j = i + 1; j < 5; ++j) 
		{
			if (sort2[i] < sort2[j]) 
			{
				float temp = sort2[i];
				sort2[i] = sort2[j];
				sort2[j] = temp;
				
			}
		}

	}
        printf("\n------GAIN ACCORDING TO ROOT NODE CLASSIFICATION ----------\n");
	for(i=0;i<5;i++)
	{
		printf("\n%f",sort2[i]);
	}
end=clock();
exectime=(double)(end-start)/CLOCKS_PER_SEC;
printf("\nExecution Time= %fs \n",exectime);
return 0;
}
