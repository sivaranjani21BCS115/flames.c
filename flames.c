
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

void main()
{
    int name1_len,crush_len,tot_len;
    int i,j,red_flame,s;
    char your[20],crush[20],a[10]={' ','f','l','a','m','e','s'},b[10];
    printf("Enter the your name: ");
    scanf("%s",your);
    printf("\nEnter the your crush name : ");
    scanf("%s",crush);
    name1_len=strlen(your);
    crush_len=strlen(crush);
    tot_len=name1_len+crush_len;
    for(i=0;i<strlen(your);i++)
    {
        for(j=0;j<strlen(crush);j++)
        {
            if(your[i]==crush[j])
            {
                your[i]=crush[j]=' ';
                tot_len=tot_len-2;
                break;
            }
        }
    }
    for(red_flame=6;red_flame>1;red_flame--)
 {
        s=tot_len%red_flame;
        if(s==0)
        {
            s=red_flame;
            i=1;
        }
        else
        {
            a[s]='\0';
            i=s+1;
        }
        j=1;
        while(1)
        {
            if(i==s)
            {
                break;
            }
        b[j]=a[i];
        if(i==red_flame)
        {
            i=0;
        }
        i++;
        j++;
        }
        for(i=1;i<=red_flame-1;i++)
        {
            a[i]=b[i];
        }
    }
    printf("\nRelationship is:");
    switch(a[1])
    {
    case 'f':
        printf("Friend");
        break;
    case 'l':
        printf("Love");
        break;
    case 'a':
        printf("Affection");
        break;
    case 'm':
        printf("Marriage");
        break;
    case 'e':
        printf("Enemy");
        break;
    case 's':
        printf("Sister");
        break;
    }
}
