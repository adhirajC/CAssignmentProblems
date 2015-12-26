#include<stdio.h>
#include<string.h>

/*I INITALLY DID THE CODE TILL THE 100s as I HAD READ THE ASSIGNMENT WRONG, HOWEVER, I HAVE FIXED THE CODE SO IT ONLY PRINTS IF THE INPUT IS AN EVEN NUMBER BETWEEN THE RANGE OF 20 AND 78*/
void substring(const char letter[], char substr[], int start, int subLen)
{
    int c;
    for (c = 0 ; c < subLen ; c++)
        substr[c] = letter[start+c];

    substr[c]  = '\0';
}



/* here go prototypes of your two functions convert and bubble_sort */
int convert(const char letter[])
{

    const char *nums[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten",
                          "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    int k,j = 0;
    for (k = 0; k< 19; k++)
        if(strcmp(letter,nums[k])==0)
            return k;

    const char *tens[] = {"twenty", "thirty","forty","fifty","sixty","seventy","eighty","ninety","hundred"};
    for (j = 0; j< 9; j++)
        if(strcmp(letter,tens[j])==0)
            return (10*(j+2));


    for (j = 0; j< 9; j++)
    {
        int length = strlen(letter);
        int endPos = strlen(tens[j]);
        char firstletter[endPos+1];
        substring(letter,firstletter, 0, endPos);
        if(strcmp(firstletter,tens[j])==0)
        {
            int position = strlen(tens[j]);
            int lastletterlen = length - position;
            char lastletter[lastletterlen+1];
            substring(letter,lastletter, position, lastletterlen);
            for (k = 0; k< 19; k++)
                if((strcmp(lastletter,nums[k])==0))
                    return k + (10*(j+2));
        }
    }
    return 10;
}

void bubble_sort(int nums[], int r)
{
    int i,j,temp;
    for(i=0; i<r; i++)
    {
        for(j=1; j<(r-i); j++)
            if (nums[j-1]>nums[j])
            {
                temp=nums[j-1];
                nums[j-1]=nums[j];
                nums[j]=temp;
            }
    }
}
int main(void)
{
    char str_num[20];
    int nums[100];
    int i=0, r;
    int k, x;
    char letter[20];
    FILE *inp;
    inp=fopen("input.txt","r");

    /* if fopen fails to open a file it returns a NULL pointer */

    if(inp==NULL)
    {
        printf("\n Cannot open file input.txt \n");
        return(-1); /* the program terminates immediately */
    }


    while(fscanf(inp,"%s", str_num)!=EOF)
    {

        /*you can use this command to see what fscanf just read */

        /*(printf("\n%s\n", str_num);*/

        /* here goes the call to your function convert as, well as,storing of the result it returns into the array nums */
        //printf("%s\n",str_num);
        x=convert(str_num);
        //printf("%d\n",x);
        nums[i]=x;
        i++;
        r=i;
    }



    /* here goes the call to the function bubble sort */
    bubble_sort(nums,r);
    /* here goes printing of the sorted elements of the array without
    printing duplicate numbers */
    int lastVal = -1;
    for (k = 0; k< (r); k++)
    {

        if (nums[k] != lastVal)
        {
            lastVal = nums[k];
            if ((nums[k]>=20)&&nums[k]<=78){
            if (nums[k]%2==0){
            if(k==0)
            {
                printf("%d", nums[k]);

            }
            else
            {
                printf(", %d", nums[k]);
            }
            }
        }
        }
    }
    fclose(inp);
    return(0);
}




/* here go your two functions */

