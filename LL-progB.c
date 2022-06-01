#include <stdio.h>
#include <stdlib.h>



void insertSort(int *Array,int Number){
int i,j,v;
for(i=2;i<=Number-1;i++){
v = Array[i];
j = i;
while(Array[j-1]>v && j>=1){
Array[j] = Array[j-1];
j--;
}
Array[j] = v;
}
for(i=0;i<Number;i++)
printf("Cell #%d contains the value of %d\n",i,Array[i]);
}

int main(){
int Number,i;
Number = 100;
int Array[Number];

printf("Original List:\n");

for(i=0;i<Number;i++){
Array[i] = (rand()%100);
printf("Cell #%d contains the value of %d\n",i,Array[i]);}

printf("\n\n\n");
printf("Sorted List:\n");
insertSort(Array,Number);
}

