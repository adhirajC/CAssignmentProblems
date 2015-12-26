#include <stdio.h>
#include <stdlib.h>
#include <math.h.>

void clear (void){
  while ( getchar() != '\n' );
}
/*=================================================================================================================================================
                                                            FUNCTION QUESTION 3
==================================================================================================================================================*/
char iz_zero(int input){
char z;
char n;
if (input==0){
    return 'z';
}else{
    return 'n';
}
}
/*====================================================================================================================================================
                                                            FUNCTION FOR QUESTION 4
======================================================================================================================================================*/


int myrectangle(int a, char b, char c){
    int i;
    printf("%c%c%c%c%c%c\n",b,b,b,b,b,b);
    for (i=1;i<=a;i++){
        printf("%c    %c\n",c,c);
    }
    printf("%c%c%c%c%c%c",b,b,b,b,b,b);
}
/*=======================================================================================================================================================
                                                            FUNCTION FOR QUESTION 5
========================================================================================================================================================*/

double get_average(int a){
int i;
double n=0;
double l;
for (i=1;i<=a;i++){
printf("Please enter a number");
scanf("%lf",&l);
n=l+n;
}
return (n/a);
}
/*=====================================================================================================================================================
                                                            FUNCTION FOR QUESTION 6
=======================================================================================================================================================*/

double min(int small){
int count;
double l;
double lowestl;
for (count=1;count<=small;count++){
 printf("Please enter a number");
 scanf("%lf",&l);
 if ((count==1)||(l<lowestl)){
         lowestl=l;
         }
}
return lowestl;
}

/*================================================================================================================================
                                                            FUNCTION QUESTION 7
==================================================================================================================================*/
double standard_dev(int g){
    double a=0;
    double n=0;
    int count;
    double l;
    double answer;
    double average;
   for (count=1;count<=g;count++){
    printf("Please enter a number");
    scanf("%lf",&l);
    n=l+n;
    a=(l*l)+a;

}   average=n/g;
    answer=sqrt((a/g)-(average*average));
    return answer;
}
/*====================================================================================================================================================
                                                            FUNCTION QUESTION 8
======================================================================================================================================================*/
char invert_caps(int getit){
int resultchar;
if ((getit>=65)&&(getit<97)){
    resultchar=getit+32;
}else{
    resultchar=getit-32;
    }
    return resultchar;
}
/*===================================================================================================================================================
                                                            FUNCTION FOR QUESTION 10
======================================================================================================================================================*/
int leap(int year){
    if (year%400==0){
        return 1;
    }else if(year%100==0){
        return 0;
    }else if(year%4==0){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
/*========================================================================================================================
                                                    QUESTION 1
==========================================================================================================================*/
double m1;
double x1;
double x2;
double m2;
double y1;
double y2;
printf("Please enter the 3 numbers for the horizontal segment\n");
scanf("%lf%lf%lf",&m1,&x1,&x2);
printf("Please enter the 3 numbers for the vertical segment\n");
scanf("%lf%lf%lf",&m2,&y1,&y2);

if ((m2>=(x1))||(m2<=(x2))){
    if((m1<=y2)&&(m1>=y1)){
        printf("YES THEY DO INTERSECT!\n");
    }else{
    printf("NO THEY DO NOT INTERSECT\n");
    }
    }else{
    printf("NO THEY DO NOT INTERSECT\n");
    }


/*========================================================================================================================
                                                    QUESTION 2
==========================================================================================================================*/
 int n;
 int p;
 int count=0;
 p=1;
 printf("PLEASE ENTER THE FACTORIAL VALUE:\n");
 scanf("%d",&n);
 while(count<n){
    count++;
    p=p*count;
}
printf ("%d",p);
printf ("\n");

/*=====================================================================================================================
                                QUESTION 3
=======================================================================================================================*/
int input;
char r,z;
printf("PLEASE ENTER THE VALUE TO SEE IF IT IS ZERO OR NOT\n");
clear();
scanf("%d",&input);
r=iz_zero(input);
printf("%c",r);
printf("\n");
if (r=='z'){
    printf("THE VALUE IS ZERO");
}else{
    printf("THE VALUE IS NOT ZERO");
}
printf("\n");

/*=======================================================================================================================
                            QUESTION 4
==========================================================================================================================*/
int non_neg;
char ch1;
char ch2;
clear();
printf("Enter a non-negative integer followed by a space followed by a character followed by a space followed by another character \n");
scanf("%d %c %c",&non_neg,&ch1,&ch2);
while (non_neg<0){
    printf("Please enter a non negative integer");
    scanf("%d %c %c",&non_neg,&ch1,&ch2);
}
myrectangle(non_neg,ch1,ch2);
printf("\n");
/*==========================================================================================================================
                            QUESTION 5
============================================================================================================================*/
int averageN;
double average;
printf("Enter a non negative number");
scanf("%d",&averageN);
average=get_average(averageN);
printf ("Average is %f",average);
printf("\n");

/*----------------------------------------------------------------------------------------------------------------------------
                        QUESTION 6
----------------------------------------------------------------------------------------------------------------------------*/
int minN;
double minval;
printf("Enter a non negative number");
scanf("%d",&minN);
minval=min(minN);
printf ("Minimum value is %f",minval);
printf("\n");

/*=============================================================================================================================
                        QUESTION 7
===============================================================================================================================*/
int inputval;
double deval;
printf("ENTER A NON NEGATIVE NUMBER");
scanf("%d",&inputval);
deval=standard_dev(inputval);
printf ("Standard deviation is %f",deval);
printf("\n");

/*=============================================================================================================================
                    QUESTION 8
==============================================================================================================================*/
char firstchar,newchar;
clear();
printf("Please enter a letter");
scanf("%c",&firstchar);
newchar=invert_caps(firstchar);
printf("%c",newchar);
clear();
printf("\n");

/*=============================================================================================================================
                QUESTION 9
===============================================================================================================================*/
double pi;
double pisum=0;
int i1=1;
int i2=2;
int start;
double i3=1;
printf("Please enter 1 to get the Pi accurate to the 99th term");
scanf("%d",&start);
while (start!=1){
printf("Please enter 1 to get the Pi accurate to the 99th term");
scanf("%d",&start);
}
i1=1;
while(i1<=99){

    if (i2%2==0){
        pisum=pisum+(1/i3);
    }else{
        pisum=pisum-(1/i3);
    }
    i2=i2+1;
    i1=i1+2;
    i3=i3+2;
    }



    pi=(pisum*4.0);
    printf("PI IS %lf",pi);
    printf("\n");
/*================================================================================================================
                            QUESTION 10
=================================================================================================================*/
 int day;
 int month;
 int year;
 int sum=0;
 int e;
 int x;
 int answer;
 printf ("Please enter the day, the month and the year (all in integers)");
 scanf("%d%d%d",&day,&month,&year);
  x=leap(year);
  for (e=1;e<month;e++){
    if(e==(1||3||5||7||8||10||12)){
       sum=sum+31;
    }else if(e==2){
        if (x==1){
            sum=sum+29;
        }else{
            sum=sum+28;
    }
    }
    else{
        sum=sum+30;
    }
        }
        answer=sum+day;
        printf("Day in the year is %d",answer);


   return 0;
}

