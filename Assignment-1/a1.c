#include <stdio.h>
#include <stdlib.h>
#define pounds_to_kilos 2.2

void clear (void){
  while ( getchar() != '\n' );
}

int main(void){
/*
=========================================================================================================================
QUESTION 1
==========================================================================================================================
*/


double pounds;
double kilos;

   printf("ENTER THE POUNDS");
   scanf("%lf",&pounds);
   kilos=pounds/pounds_to_kilos;
   printf("IT IS %f kg",kilos);
   printf ("\n");

/*
=========================================================================================================================
QUESTION 2
=========================================================================================================================
*/
 double inches;
 double feet;
 double sum;
 printf("Please enter the feet:");
 scanf("%lf",&feet);
 printf("Please enter the inches");
 scanf("%lf",&inches);
 sum=(feet*30.48)+(inches*2.54);
 printf("Your height in cm is %f",sum);
 printf ("\n");

 /*
 ========================================================================================================================
 QUESTION 3
 ========================================================================================================================
 */
  double height;
  double weight;
  double BMI;
  printf("Please enter your height in inches");
  scanf("%lf",&height);
  printf("Please enter your weight in pounds");
  scanf("%lf",&weight);
  clear();
  BMI=(weight/(height*height))*703;
  printf("Your BMI is %f",BMI);
  printf ("\n");

/*
=========================================================================================================================
QUESTION 4
==========================================================================================================================
*/
char firstchar;
char secondchar;
char thirdchar;
printf("PLEASE ENTER THE FIRST CHARACTER THAT YOU WOULD LIKE TO BE DISPLAYED IN THE THREE LOCATIONS OF THE DRAWING!");
scanf("%c",&firstchar);
clear();
printf("PLEASE ENTER THE SECOND CHARACTER THAT YOU WOULD LIKE TO BE DISPLAYED IN THE THREE LOCATIONS OF THE DRAWING!");
scanf("%c",&secondchar);
clear();
printf("PLEASE ENTER THE THIRD CHARACTER THAT YOU WOULD LIKE TO BE DISPLAYED IN THE THREE LOCATIONS OF THE DRAWING!");
scanf("%c",&thirdchar);
clear();
printf("%c****     ****%c \n",firstchar,secondchar);
printf("*   *  *    * \n");
printf("*   * *     * \n");
printf("*   %c     * \n",secondchar);
printf("*   **     * \n");
printf("*   *  *    *\n");
printf("%c****     ****%c \n",firstchar,thirdchar);

/*
===========================================================================================================================
                                            QUESTION 5
===========================================================================================================================
*/
int number;
int lvalue;
int kvalue;
int count;
count=0;
printf("Please Enter Number:");
scanf("%d",&number);
for (;;){
    count=count+1;
    kvalue=number-count;
        if(kvalue%12==0){
            lvalue=kvalue/12;
            printf("(%d , %d)",lvalue,count);
            break;
        }
}
        printf("\n");
/*
============================================================================================================================
                                            QUESTION 6
============================================================================================================================
*/
double number1;
double lvalue1;
double kvalue1;
int count1;
count1=0;
printf("Please enter number:");
scanf("%lf",&number1);
clear();
for (;;){
    count1=count1+1;
    kvalue1=number1-count1;
    lvalue1=kvalue1*12;
        if((lvalue1<12)&&(lvalue1>0)){
            printf("(%d,%f)",count1,lvalue1);
            break;
        }
}       printf("\n");

/*
=============================================================================================================================
                                            QUESTION 7
=============================================================================================================================
*/
char letter_1;
char letter_2;
char letter_3;
char letter_4;
char letter_5;
char letter_6;
char letter_7;
char letter_8;
char letter_9;

printf("PLEASE INSERT THE FOUR LETTER NAME:");
scanf("%c%c%c%c",&letter_1,&letter_2,&letter_3,&letter_4);
clear();
printf("PLEASE INSERT THE FIVE LETTER CITY:");
scanf("%c%c%c%c%c",&letter_5,&letter_6,&letter_7,&letter_8,&letter_9);
clear();
printf ("%c%c%c%c was like an ugly bear\n he didn't like %c%c%c%c%c at all\n he drank to much beer\n he couldn't hear and claimed\n him self to been killed by an ogre", letter_1, letter_2, letter_3, letter_4, letter_5, letter_6, letter_7, letter_8, letter_9);
printf("\n");
/*
===================================================================================================================
                                QUESTION 8
====================================================================================================================*/
double a1, a2, b1, b2, c1, c2, d1, d2, h,z,w,x,y,g;
double l,k;
printf("PLeASEE ENTER THE 1st of the 4 points:");
scanf("%lf%lf", &a1, &a2);
clear();
printf("PLeASEE ENTER THE 2nd of the 4 points:");
scanf("%lf%lf", &b1, &b2);
clear();
printf("PLeASEE ENTER THE 3rd of the 4 points:");
scanf("%lf%lf", &c1, &c2);
clear();
printf("PLeASEE ENTER THE 4th of the 4 points:");
scanf("%lf%lf", &d1, &d2);
clear();

l=b1-a1;
k=b2-a2;
printf("THE MIDPOINT IS (%f,%f) \n",l/2.,k/2.);

g=(b2-a2)/(b1-a1); /*slope of first two points*/
h=(d2-d1)/(c2-c1); /*slope of second two points*/


if (g==h){
    printf("THE TWO LINES ARE PARALLEL");

}else{
z=(a2)-(g*(a1)); /*to get the y intercept*/
w=(c2)-(h*(c1)); /*to get the y intercept*/

x=(z-w)/(h-g);  /**/
y=((g)*x)+z;
printf("The intersecting point of the two lines is %f , %f",x,y);
printf("\n");

}
return (0);
}


