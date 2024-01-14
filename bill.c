#include<stdio.h>
#define GST 0.05
int main()
{
    const int edp = 30, vap = 15, dosap = 20;
    int edq,vaq,dosaq;
    int ted,tva,tdosa;
    int subtotal,tax,total;

    printf("Enter the Quantity of Edly sold : ");
    scanf("%d",&edq);
    printf("Enter the Quantity of Vada sold : ");
    scanf("%d",&vaq);
    printf("Enter the Quantity of Dosa sold : ");
    scanf("%d",&dosaq);

    ted = edp * edq;
    tva = vaq * vap;
    tdosa = dosaq * dosap;

    subtotal = ted + tva + tdosa;
    tax = subtotal * GST;
    total = subtotal+tax;

    printf("Total Edly price = %d",ted);

    return 0;
}