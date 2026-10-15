#include<stdio.h>
int main(){
  int price,count;
  float change,total,paidAmount;
  count = 0;
  total = 0;

  while(1){
        printf("Enter Item price:Ksh. ");
        scanf("%d",&price);
        if(price == 0){
            break;
        }
        else if(price > 0){
        total +=price;
        count++;
        }
        else if(price < 0){
            printf("Invalid price.Try again.\n");
        }
  }
  if(count == 0){
    printf("No sale");
    return 0;
  }
  while (1){
     printf("Enter the amount you wish to pay: ");
     scanf("%f",&paidAmount);
     if(paidAmount >= total){
        break;
     }

  }
  change = paidAmount - total;
  printf("Items: %d\nTotal: %.2f\nAmount Paid: %.2f\nChange: %.2f\n",count,total,paidAmount,change);
}
