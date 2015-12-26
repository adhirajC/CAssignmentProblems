#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char *
seperate_two(char *s, const char *seperator, char **last)
{
	char *planner;
	int c, sc;
	char *divider;


	if (s == NULL && (s = *last) == NULL)
		return (NULL);

cont:
	c = *s++;
	for (planner = (char *)seperator; (sc = *planner++) != 0;) {
		if (c == sc)
			goto cont;
	}

	if (c == 0) {
		*last = NULL;
		return (NULL);
	}
	divider = s - 1;



for (;;) {
		c = *s++;
		planner = (char *)seperator;
		do {
			if ((sc = *planner++) == c) {
				if (c == 0)
					s = NULL;
				else
					s[-1] = 0;
				*last = s;
				return (divider);
			}
		} while (sc != 0);
	}
}


char *
seperate(char *s, const char *seperator)
{
	static char *last;

	return seperate_two(s, seperator, &last);
}







void does_it_match(char *string1,char *string2){
  int i = 0;
  int j =0;
  int counter = 0;
  while (string1[i] != '\0' && string2[j] != '\0'){

       if (string2[j] == string1[i]){
                      j++;
                      i++;
                      counter ++;
       }
       else if (string2[j] == '*'){
            if (string2[j+1] == string1[i]){
               counter ++;
               j++;
            }
            else{
            i++;
            }
       }
       else if (string2[j] != string1[i]){
            counter = 0;
            i++;
       }
  }

  if(counter > 1 && (string2[j] == '\0') || (string2[j] == '*' && string2[j+1] == '\0')){
  printf("YES string 2 is a substring of string 1\n");
  }else{
  printf("string 2 is NOT a substring of string 1\n");
  }
}


typedef struct{
    double mantis;
    int expo;
    }sci_not_t;

int main()
{

/*======================================================================================
                    QUESTION 1
=========================================================================================*/

sci_not_t x;
 sci_not_t y;
int i,v, l, a, expo;
double n;
    char g[20];
    char mystring[20];
    scan_sci(&x);
    scan_sci(&y);
    printf("Your two values are %5fe%d\n",x.mantis,x.expo);
    printf("%5fe%d\n",y.mantis,y.expo);
    product(x,y);
    add(x,y);
/*======================================================================================
                    QUESTION 2
=========================================================================================*/
char string1[100];
  char string2[20];
  printf("Please enter string\n");
  scanf("%s",string1);
  printf("Pleaase enter second string\n");
  scanf("%s",string2);

  does_it_match(string1,string2);



    return 0;
}
scan_sci(sci_not_t *x){
    char *g[100];
    printf("Please enter a mantissa and exponent\n");
    scanf("%s",*g);
   (*x).mantis=atof(seperate(*g, "e"));
    (*x).expo=atoi(seperate(NULL, "\0"));
}


void product(sci_not_t x, sci_not_t y){
   double d=(x.mantis*y.mantis);
    int l=(y.expo+x.expo);

    if (d<0.1){
        while(d<0.1){
            l--;
        d=d*10;
        }
    }
    while (d>1.0){
        l++;
        d=d/10;
    }
    printf("product is %5fe%d\n",d,l );

}

void add(sci_not_t x, sci_not_t y){
 double firstexpo=pow(10,x.expo);
 double secondexpo=pow(10,y.expo);
 double sum;
double firstsum=firstexpo*(x.mantis);
double secondsum=secondexpo*(y.mantis);
sum=firstsum+secondsum;
int exponent=0;
 if (sum<0.1){
    while(sum<0.1){
        exponent--;
        sum=sum*10;
    }
 }
 while (sum>1.0){
        exponent++;
        sum=sum/10;
    }

printf("SUM IS %5fe%d\n",sum,exponent);
}
