#include<stdio.h>
void readDetails(int *id,int *age,char *cust_type,char *med_name,int *quantity,float *bill);
void calcBill(char *cust_type,char *med_name,int *quantity,float *bill);
void printDetails(int *id,int *age,char *cust_type,char *med_name,int *quantity,float *bill);
int main()
{
    int customer_id;
    char customer_type,medicine_name;
    int customer_age,meds_quantity;
    float bill_amt;
    readDetails(&customer_id,&customer_age,&customer_type,&medicine_name,&meds_quantity,&bill_amt);
    float bill;
    calcBill(&customer_type,&medicine_name,&meds_quantity,&bill_amt);
    printDetails(&customer_id,&customer_age,&customer_type,&medicine_name,&meds_quantity,&bill_amt);
    return 0;
}
void readDetails(int *id,int *age,char *cust_type,char *med_name,int *quantity,float *bill)
{
    printf("Enter Customer ID:");
    scanf("%d",id);
    printf("Enter age:");
    scanf("%d",age);
    printf("Enter Quantity:");
    scanf("%d",quantity);
    printf("Enter Medicine name P-Paracetamol, L-Levocitrizine, R-Rantac, A-Amoxicillin:");
    scanf(" %c",med_name);
    printf("Enter Customer Type R-Regular or T-Temporary:");
    scanf(" %c",cust_type);
}
    void calcBill(char *cust_type,char *med_name,int *quantity,float *bill)
{
    
    if(*med_name=='P'||*med_name=='p')
    *bill=(*quantity)*(5.0f);
    else if(*med_name=='L'||*med_name=='l')
    *bill=(*quantity)*(2.0f);
    else if(*med_name=='R'||*med_name=='r')
    *bill=(*quantity)*(2.0f);
    else *bill=(*quantity)*(10.0f);

    if(*cust_type=='R')//discount if any and 5 percent gst on final bill
    { 
    *bill=(*bill)*((100.0f-10.0f)/100.0f)*((100.0f+5.0f)/100.0f);
    }
    else *bill=(*bill)*((100.0f+5.0f)/100.0f);
}

void printDetails(int *id,int *age,char *cust_type,char *med_name,int *quantity,float *bill)
{
    printf("DETAILS:\n");
    printf("Customer ID:%d\n",*id);
    printf("CUstomer Type:%c\n",*cust_type);
    printf("Age:%d\n",*age);
    if(*med_name=='P'||*med_name=='p')
    printf("Medicine Name:Paracetamol\n");
    else if(*med_name=='L'||*med_name=='l')
    printf("Medicine Name:Levocitrizine\n");
    else if(*med_name=='R'||*med_name=='r')
    printf("Medicine Name:Rantac\n");
    else 
    printf("Medicine Name:Amoxicillin\n");
    printf("Quantity:%d\n",*quantity);
    printf("Final Bill:%f",*bill);
}