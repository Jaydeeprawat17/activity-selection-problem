#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 16
// ACTIVITY SELECTION
struct Activity{
char aname[7];
int start_time,finish_time;
};

void bubble_sort(struct Activity a[max],int length){
  int s,j,start,finish;
  char str[6];
  for(s=1;s<length;s++){
    for(j=0;j<(length-s);j++){

	if(a[j].finish_time>a[j+1].finish_time){
	   start= a[j].start_time;
	   finish= a[j].finish_time;
	   strcpy(str,a[j].aname);

	   a[j].start_time=a[j+1].start_time;
	   a[j].finish_time=a[j+1].finish_time;
	   strcpy(a[j].aname,a[j+1].aname);

	   a[j+1].start_time=start;
	   a[j+1].finish_time=finish;
	   strcpy(a[j+1].aname,str);
	}
    }
  }
}
 void show_soln(char soln[50],int count){

   printf("------------------------------------\n");
   printf("result: ");

   soln[strlen(soln)-1]='\0';
	printf("%s\nNumber of Activity is :%d ",soln,count);
 }

void select_activity(struct Activity a[max],int length){
  int finish_time,s,count;
  char soln[50];
     finish_time=-1;
     count=0;
   for(s=0;s<length;s++){

       if(a[s].start_time!=a[s].finish_time && finish_time==-1){
	  strcpy(soln,a[s].aname);
	  strcat(soln,",");
	  finish_time=a[s].finish_time;
	  count++;
       }
       if(finish_time<=a[s].start_time && a[s].start_time != a[s].finish_time){
	  strcat(soln,a[s].aname);
	  strcat(soln,",");
	  finish_time=a[s].finish_time;
	  count++;
       }
   }
   show_soln(soln,count);
}

void main(){
 int s,length;
 struct Activity a[max];
 clrscr();

 printf("Enter Number of Activities: ");
 scanf("%d",&length);
 printf("\nEnter %d Activities :\n",length);
 for(s=0;s<length;s++){
 printf("Enter Activity %d name , start and finish time \n",s+1);
   scanf("%s %d %d",&a[s].aname,&a[s].start_time,&a[s].finish_time);
   clrscr();
 }

   bubble_sort(a,length);
   select_activity(a,length);

 getch();

}