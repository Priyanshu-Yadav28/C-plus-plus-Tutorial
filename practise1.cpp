#include<stdio.h>
bool digit(int n);
int main() {
  int n, t;
  printf("Enter a number:\n");
  scanf("%d",&n);
  t = digit(n);
  printf("%d", t);
  return 0;
}

bool digit(int x){
  int d,a;
  printf("Enter a digit: \n");
  scanf("%d",&a);
  while(x>0){
  d=x%10;
        x=x/10;
    }
  if(d==a){
    return 1;
  }
  return 0;

}