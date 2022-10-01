#include<stdio.h>
int main(){
  int first = 0, second = 1, next;
  int num;
  printf("Enter the number = ");
  scanf("%d",&num);
  while(num){
    next = first + second;
    printf("%d\n",next);
    first = second;
    second = next;
    num--;
  }
  return 0;
}
