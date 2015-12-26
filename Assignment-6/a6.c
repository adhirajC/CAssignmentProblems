#include<stdio.h>
#include<stdlib.h>

typedef struct BC{
  float element;
  struct BC *link;
}BC;


void sort(int arraydata[], int size){
  int i, j,k;
  int temp;
  
  do{
  	j = 0;
	for(i=0;i<size-1;i++){
	    if(arraydata[i] > arraydata[i+1]){
		  j = 1;
		  temp = arraydata[i];
		  arraydata[i] = arraydata[i+1];
		  arraydata[i+1] = temp;
		}
	 }
	}while(j==1);
	
	 printf("\nSorted list is\n");
			for(k = 0;k<size;k++){
	      		printf("%d ", arraydata[k]);
       		  }
}

void insert(int arrayins[], int numberinsrt, int size){
   arrayins[size++] = numberinsrt;
   sort(arrayins,size);   
}


void delete(int arrayin[], int numberdelete, int size){
   int i;
   for(i=0;i<size;i++){
     if(arrayin[i] == numberdelete){
	   arrayin[i] = arrayin[i+1];
	   arrayin[i+1] = '\0';
	 }
   }
   sort(arrayin,size);

}

void search(int arrays[], int numbersearch, int size){
    int i;
	int present=0;
	  for(i=0;i<size;i++){
	     if(arrays[i] == numbersearch){
		  present++;
		  }
		  }
   if(present != 0){
   printf("\nInteger is present in the list\n");
      }else{
     printf("\nInteger is not present in the list\n");
  }	   	     
		  
}


BC* converting(BC *list, int arrays[], int size){
    int p;
	BC* currentElement = list;
	BC* prevElement = list;
	
	for(p=0;p<size;p++){
	  prevElement->element = arrays[p];
	}
	
}

void counter(int arrayp[],int size, int bucketnumber){
  int i=0;
  int bucket1[1000];
  int bucket2[1000];
  int bucket3[1000];
  int bucket4[1000];
  int bucket5[1000];
  int bucket6[1000];
  int bucket7[1000];
  int bucket8[1000];
  int bucket9[1000];
  int bucket10[1000];
  int bucket11[1000];
  int bucket12[1000];
  int bucket13[1000];
  int bucket14[1000];
  int bucket15[1000];
  int bucket16[1000];
  int bucket17[1000];
  int bucket18[1000];
  int bucket19[1000];
  int bucket20[1000];
  
  
  
     for(i=0;i<size;i++){
	    if(arrayp[i] < 25){
		      bucket1[i] = arrayp[i];
			 }
 	      if(arrayp[i] < 50 && arrayp[i] >= 25){
		      bucket2[i] = arrayp[i];
			 }

           if(arrayp[i] < 75 && arrayp[i] >= 50){
		      bucket3[i] = arrayp[i];
			 }
			 
            if(arrayp[i] < 100 && arrayp[i] >= 75){
		      bucket4[i] = arrayp[i];
			 }
           
		     if(arrayp[i] < 125 && arrayp[i] >= 100){
		      bucket5[i] = arrayp[i];
			 }
             
			 if(arrayp[i] < 150 && arrayp[i] >= 125){
		      bucket6[i] = arrayp[i];
			 }

             if(arrayp[i] < 175 && arrayp[i] >= 150){
		      bucket7[i] = arrayp[i];
			 }
              
			   if(arrayp[i] < 200 && arrayp[i] >= 175){
		      bucket8[i] = arrayp[i];
			 }
			 
			  if(arrayp[i] < 225 && arrayp[i] >= 200){
		      bucket9[i] = arrayp[i];
			 }
			 
			  if(arrayp[i] < 250 && arrayp[i] >= 225){
		      bucket10[i] = arrayp[i];
			 }
			 
			 
			 if(arrayp[i] < 275 && arrayp[i] >= 250){
		      bucket11[i] = arrayp[i];
			 }
			 
 	        if(arrayp[i] < 300 && arrayp[i] >= 275){
		      bucket12[i] = arrayp[i];
			 }

           if(arrayp[i] < 325 && arrayp[i] >= 300){
		      bucket13[i] = arrayp[i];
			 }
			 
            if(arrayp[i] < 350 && arrayp[i] >= 325){
		      bucket14[i] = arrayp[i];
			 }
           
		     if(arrayp[i] < 375 && arrayp[i] >= 350){
		      bucket15[i] = arrayp[i];
			 }
             
			 if(arrayp[i] < 400 && arrayp[i] >= 375){
		      bucket16[i] = arrayp[i];
			 }

             if(arrayp[i] < 425 && arrayp[i] >= 400){
		      bucket17[i] = arrayp[i];
			 }
              
			   if(arrayp[i] < 450 && arrayp[i] >= 425){
		      bucket18[i] = arrayp[i];
			 }
			 
			  if(arrayp[i] < 475 && arrayp[i] >= 450){
		      bucket19[i] = arrayp[i];
			 }
			 
			  if(arrayp[i] < 500 && arrayp[i] >= 475){
		      bucket20[i] = arrayp[i];
			 }
}

switch(bucketnumber){
     case 1: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket1);
		  }
        break;	  	    
		
	case 2: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket2);
		  }
        break;	  	    
		
	case 3: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket3);
		  }
        break;	  	    
	
	case 4: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket4);
		  }
        break;
	
	case 5: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket5);
		  }
        break;
		
	case 6: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket6);
		  }
        break;	  	    
		
	case 7: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket7);
		  }
        break;	  	    
		
	case 8: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket8);
		  }
        break;	  	    
	
	case 9: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket9);
		  }
        break;	  	    
		
	case 10: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket10);
		  }
        break;	  	    
	
	case 11: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket11);
		  }
        break;	  	    
	
	case 12: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket12);
		  }
        break;	  	    
		
	case 13: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket13);
		  }
        break;	  	    
		
	case 14: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket14);
		  }
        break;	  	    
	
	case 15: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket15);
		  }
        break;	  	    
		
	case 16: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket16);
		  }
        break;	  	    
	
	case 17: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket17);
		  }
        break;	  	    
	
	case 18: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket18);
		  }
        break;	  	    
	
 	case 19: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket19);
		  }
        break;	  	     
		  
	case 20: 
	   for(i=0;i<size;i++){
	      printf("%d", &bucket20);
		  }
        break;	  	    

}

}



int main(void){

int choice, returnmenu, bucketnumber;
int searchnumber, numberinsert, numberdelete;
int array[10000];
int size=0; 
int i=0;

BC *list;

FILE *file;
file = fopen("input2.txt", "r"); 

   while(fscanf(file,"%d",&size)>0){
     array[i++] = size;
   }
	  
	  
  fclose(file);
  
sort(array,i);

while(choice != 6){
printf("\n	  	  Welcome to Bucket List, Linked List Program\n");
printf("1.Test if a given number is in BC data structure\n");
printf("2.Insert a number into BC data structure\n");
printf("3.Delete a number from BC data structure\n");
printf("4.Display a content of a given bucket\n");
printf("5.Print buckets in order\n");
printf("6.Exit the program\n");
printf("\n     Enter your choice to proceed\n");
scanf("%d", &choice);


switch(choice){
   case 1:
        printf("\nEnter a number that need to be searched\n");
		scanf("%d", &searchnumber);
		converting(list,array,i);
		search(array,searchnumber,i);
		printf("\nEnter zero to go back to the menu\n");
		scanf("%d", &returnmenu);
		break;
		
   case 2:
        printf("\nEnter a number to be added to the linked list\n");
		scanf("%d", &numberinsert);
        insert(array,numberinsert,i);
		i++;
		printf("\nEnter zero to go back to the menu\n");
		scanf("%d", &returnmenu);
		break;
		
		
   case 3:
        printf("\nEnter a number to be deleted from the linked list\n");
        scanf("%d", &numberdelete);
		delete(array,numberdelete,i);
		printf("\nEnter zero to go back to the menu\n");
		scanf("%d", &returnmenu);
		break;
		
   case 4:
        printf("\nEnter bucket number to show its contents\n");
		scanf("%d", &bucketnumber);
	    counter(array,i,bucketnumber);
	    printf("\nEnter zero to go back to the menu\n");
		scanf("%d", &returnmenu);
		break;
		
   case 5:
        printf("\nPrinting buckets in order\n");
		sort(array,i);
		printf("\nEnter zero to go back to the menu\n");
		scanf("%d", &returnmenu);
		break;
		
   case 6:
       printf("\nExiting the program\n");
       break;
	   
   default:
      printf("\nNot a valid option, try again\n\n");	   
   
   
}

}


return 0;

}

