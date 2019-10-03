#include<stdio.h>
#include<string.h>
struct info
{
    int username;
    char password[15];
    char name[15];
    int roll;
    char address[30];
    char email[30];
    int mobile;
    int ques;
    int resp;
};
int main()
{
    int r,g;
    r=0;
    struct info a[10];
    printf("\n\n\t\t\t**********Welcome**********\n\n\n");
    first:
    printf("1. Login\n2. Exit\n3. Forgot Password\n4. Sign up\n\n");
    int i;
    scanf("%d",&i);
    if(i==1)
    {
        int j,k;
        printf("\nEnter Username: ");
        int u;
        char p[15];
        scanf("%d",&u);
        printf("\nEnter Password: ");
        scanf("%s",p);
        for(j=0;j<r;j++)
        {
            if(u==a[j].username)
            {
                k=j;
            }
        }
        if(strcmp(p,a[k].password)==0)
        {
            yo:
            printf("\n\n\t\t\t_________ login successful _________\n\n");
            start:
            printf("1. View Personal Details\n2. Edit Details\n3. View Timetable\n4. Change Password\n5. Change Security Question\n6. Exit\n\n");
            int q;
            scanf("%d",&q);
            if(q==6)
            {
                printf("\n");
                goto first;
            }
            else if(q==1)
            {
                printf("\nNAME: %s\nADDRESS: %s",a[k].name,a[k].address);
                printf("\nMOBILE NO. :%d\nEMAIL ID:%s",a[k].mobile,a[k].email);
                goto start;
            }
            else if(q==2)
            {
                edit:
                printf("\n1. Change Address\n2. Change Email Id\n3. Change Mobile\n4. Back");
                int f;
                if(f==4)
                {
                    goto start;
                }
                else if(f==3)
                {
                    printf("Enter nem no.: ");
                    scanf("%d",&a[k].mobile);
                    goto edit;
                }
                else if(f==2)
                {
                    printf("Enter New Email: ");
                    scanf("%s",a[k].email);
                    goto edit;
                }
                else if(f==1)
                {
                    printf("Enter New Address: ");
                    scanf("%s",a[k].address);
                    goto edit;
                }
            }
            else if(q==4)
            {
                hello:
                printf("\nEnter New Password: ");
                char n[15],c[15];
                scanf("%s",n);
                printf("\nConfirm Password: ");
                scanf("%s",c);
                if(strcmp(n,c)==0)
                {
                    strcpy(a[k].password,n);
                    printf("\n:::::Password Changed:::::\n\n");
                    goto start;
                }
                else
                {
                    printf("\nPasswords Do Not Match\n");
                    goto hello;
                }
            }
            else if(q==3)
            {
                FILE *f1;
                char l;
                f1=fopen("TESTFILE.txt","r");
                while((l=getc(f1))!=EOF)
                printf("%c",l);
                fclose(f1);
                goto start;
            }
            else if(q==5)
            {
                 printf("\n\nChoose your Security Question:\n\n1. What was the number of your first bike\n2. What is your current House no.\n");
                 printf("3. What is Your Father's Dob\n");
                 scanf("%d",&a[k].ques);
                 printf("Enter your Response ");
                 scanf("%d",&a[k].resp);
                 goto start;
            }
    }
        else
        {
            printf("\nInvalid Username Or Password\n");
            goto first;
        }
    }
    else if(i==4)
    {
        printf("Enter your Username(same as of your roll no.): ");
        scanf("%d",&a[r].username);
        printf("\nEnter your password: ");
        scanf("%s",a[r].password);
        printf("\nEnter your Name");
        scanf("%s",a[r].name);
        printf("\nEnter Your Address: ");
        scanf("%s",a[r].address);
        printf("\nEnter your Email: ");
        scanf("%s",a[r].email);
        printf("\nEnter your Mobile No. :");
        scanf("%d",a[r].mobile);
        printf("\n\nChoose your Security Question:\n\n1. What was the number of your first bike\n2. What is your current House no.\n");
        printf("3. What is Your Father's Dob\n\n");
        scanf("%d",&a[r].ques);
        printf("\nEnter your Response ");
        scanf("%d",&a[r].resp);
        r++;
        goto first;
    }
    else if(i==3)
    {
        int x,e,d,s;
        printf("\nEnter Username ");
        scanf("%d",&x);
        for(e=0;e<r;e++)
        {
            if(x==a[e].username)
            {
                d=e;
            }
        }
        printf("\n\nChoose your Security Question:\n\n1. What was the number of your first bike\n2. What is your current House no.\n");
        printf("3. What is Your Father's Dob\n\n");
        scanf("%d",&g);
        if(g==a[d].ques)
        {
            printf("\nEnter your Response ");
            scanf("%d",&s);
            if(s==a[d].resp)
            {
                goto yo;
            }
            else
            {
                goto first;
            }
        }
        else
        {
            goto first;
        }
    }
    else
    {
        printf("\n\n\n\t\t\t#########  Thanks  #########");
    }

    return 0;
}
