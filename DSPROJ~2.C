 #include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;

};
struct nod
{
    struct nod *prev;
    int data;
    struct nod *next;

};
struct nodee
{

    int data;
    struct nodee *next;

};
struct nodee *roott=NULL;

struct nod *rot=NULL;

void append();
void show();
void rev();
void eoppa();
void cpy();
void add50();
void accen();


void screen();
void made();



struct node *root = NULL;
void create();
void count1();
void display();
void count();
void even();
void maxi();
void sum();
void avg();
void reverse();
void delete();
void search();
void max2();
void del();
void find();
void dec();
void acen();
void adress();
void function();

void main()
    {   clrscr();
       function();
    }


void function()
{
    int q=0;

    while(q!=4)
    {
	printf("\n\tCHOOSE YOU LIST GIVEN BELOW");
	delay(100);
	printf("\n _________________________");
	 delay(100);
	printf("\n\n\a|1.Singly link list       |");
	delay(100);
	printf("\n|2.Doubly link list       |");
	delay(100);
	printf("\n|3.circular link list     |");
	 delay(100);
	printf("\n|4.Exit                   |");
	  delay(100);
	printf("\n__________________________");
	delay(100);
	printf("\n\nChoose your option:-");
	scanf("%d",&q);

	if(q==1)

	{
	     int ch=0;

    while(ch!=9)
    {
	delay(500);
	printf("\n\n\tSingly link list");
	delay(500);
	printf("\n------------------------------------------------");
       // printf("\n\n");
	delay(50);
	printf("\n1.Create                                       |");
	delay(20);
	printf("\n2.Display                                      |");
	delay(20);
	printf("\n3.Total node count                             |");
	delay(20);
	printf("\n4.Even odd                                     |");
	       delay(20);
	printf("\n5.Find the maximum value between all nodes     |");
		 delay(20);
	printf("\n6.To find the sum of all nodes                 |");
	       delay(20);
	printf("\n7. average of all node                         |");
	       delay(20);
	printf("\n8.reverse of all nodes                         |");

			  delay(20);
	printf("\n10.Replace a single data with '0'              |");
		 delay(20);
	printf("\n11.Search a node                               |");
	     delay(20);
	printf("\n12.Find the 2nd maximum value                  |");
	       delay(20);
	printf("\n13.Delete a full node                          |");
	       delay(20);
	printf("\n14.Replace two data to each other              |");
	   delay(20);
	printf("\n15.Print all data in decending order           |");
		 delay(20);
	printf("\n16.print all data in acending order            |");
	 delay(20);
	printf("\n9.exit from singly link list                   |");
	delay(20);
	printf("\n------------------------------------------------");


        printf("\nChoose any option:-");
        scanf("%d",&ch);

        switch(ch)
    {
        case 1:
        create();
        break;

        case 2:
        display();
        break;

        case 3:
        count();
        break;

        case 4:
        even();
        break;

        case 5:
        maxi();
        break;

        case 6:
        sum();
        break;

        case 9:
        function();
        break;

       case 7:
       avg();
       break;

       case 8:
       reverse();
       break;

       case 10:
       delete();
       break;

       case 11:
       search();
       break;

       case 12:
       max2();
       break;
        
        case 13:
        del();
        break;

        case 14:
        find();
        break;

       case 15:
       dec();
       break;

       case 16:
       acen();
       break;

        default:
        printf("\nPlease enter a valid number");

    }
    }

}
      else if(q==2)
      {

        int ch=0;
    
    while(ch!=3)
    {   
        printf("\n\n\tDOUBLY LINK LIST");
        printf("\n_________________________________________");
        printf("\n|1.create                                |");
        printf("\n|2.display                               |");
        printf("\n|3.exit from doubly link list            |");
        printf("\n|4.reverse                               |");
        printf("\n|5.copy only even number                 |" );
        printf("\n|6. Total EVen Odd Pelindrome count      |");
        printf("\n|7.Add 50 in every pelindrom data        |");
        printf("\n|8.Accending order in doubly link list   |");
        printf("\n|9.Count all nodes                       |");
        printf("\n|10.Print all data with their address    |");
        printf("\n_________________________________________");
        printf("\n\t\aChoose your choise:-");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            append();
            break;

            case 2:
            show();
            break;

            case 3:
            function();
            break;
            
            case 4:
            rev();
            break;

            case 5:
            cpy();
            break;

            case 6:
            eoppa();
            break;
           
           case 7:
           add50();
           break;

           case 8:
           accen();
           break;

           case 9:
           count1();
           break;

           case 10:
           adress();
           break;

            default :
            printf("\nTry another number");




        }
    }
      }

      else if(q==3)
      {
         int ch=0;
         while(ch!=3)
         {  printf("\n\tCIRCULAR LINK LIST");
            printf("\n\n1.Create       ");
            printf("\n2.Display       ");
            printf("\n3.Exit          ");
            printf("\n\tChoose your ooption:-");
            scanf("%d",&ch);

            switch(ch)
            {
                case 1:
                made();
                break;

                case 2:
                screen();
                break;

                case 3:
              function();
                break;

                default :
                printf("\nOops !Try another number");

            }
         }
      }

      else if(q==4)
      {
        exit(1);
      }

      
        
      else
      printf("\nTry another option");
      printf("\nTHANK YOU");
        }
        
        
    }


void made()
{
    struct nodee *temp;
    temp= (struct nodee *)malloc(sizeof(struct nodee));
    printf("\nEnter your value:-");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(roott == NULL)
    {
      roott=temp;
      temp->next=roott;

    }
else 
{
    struct nodee *p=roott;
    while(p->next!=roott)
    {
        p=p->next;

    }
    p->next=temp;
    temp->next=roott;

}

}

void screen()
{
    struct nodee *p=roott;

    while(p->next!= roott)
    {
        printf("\n%d",p->data);
        p=p->next;
    }
    printf("\n%d",p->data);

}
void create()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\n| You choosed create option |");
    printf("\n-----------------------------");
    printf("\nEnter a value in singly link list:-");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(root==NULL)
    {
        root=temp;
    }
    else{
        struct node *p;
        p=root;
        while(p->next!=NULL)
        {
            p=p->next;

        }
        p->next=temp;

    }
}

void display()
{
    struct node *p;
    p=root;
    printf("\nThe values of link list is given below\n");
    while(p->next !=NULL)
    {
        printf("\n%d",p->data);
        p=p->next;
    }
    printf("\n%d",p->data);
}
void count()
{   int c=0;
    struct node *p;
    p=root;


    while(p->next!=NULL)
    {    c++;
        p=p->next;
        
    }
     printf("\nTotal node = %d",c+1);
}
    
void even()
{
    struct node *q;
    q=root;
    while(q->next!=NULL)
    {
        if(q->data%2==0)
        printf("\neven =%d",q->data);
        else
        printf("\n\t\todd= %d",q->data);
        q=q->next;
    }
    if(q->data%2==0)
        printf("\neven =%d",q->data);
        else
        printf("\n\t\todd= %d",q->data);

}    

void maxi()
{
int max = -9999;
    struct node *p;
    p=root;

    while(p->next!=NULL)
    {
        max= p->data;
        p=p->next;
    }
    if(max <= p->data)
    {
    max = p->data;
    printf("\nMaximum number is = %d ",max);
    }
    else{
    printf("\nmaximum number is = %d",max);
}
}

void sum()
{
int sum =0;
    struct node *p;
    p= root;

    
    while(p->next!=NULL)

{
    sum= sum+p->data;
    p=p->next;

}
sum= sum + p->data;
printf("\nTotal sum = %d",sum);


}
void avg()
{    
    int avr;
    int c=0;
    int b=0;
    struct node *p;
    p=root;
    while(p->next!=NULL)
    {
        c=c+p->data;
        b++;
        p=p->next;
       // avr=c/b;
    }
    c=c+p->data;
    b++;
   avr=c/b;
    printf("average=%d",avr);
}

void reverse()
{
    struct node *p;
    int arr[100],i=0,s=0;
    p = root;
     while(p != NULL)
     {
        arr[i]=p->data;
        p=p->next;
        i++;
        s++;
     }
     s=s-1;
     
     for(i=s;i>=0;i--)
     
    {
        printf("\n%d",arr[i]);
    }
}

void delete()
{
int a;
struct node *p;
p = root;


printf("\nEnter the data to remove:-");
scanf("%d",&a);

while(p != NULL)
{
    if(p->data == a )
    
    {
    p->data=0;
    }

    p=p->next;
}
p=root;
 while(p!=NULL)
 {
    printf("\n%d",p->data);
    p=p->next;

 }

}
void search()
{
   int num,num1;
    struct node *p;
	p = root;

        printf("\n Enter your value to search:-");
        scanf("%d",&num);

        while(p->next != NULL)
        {
            if(p->data==num)
            {
                num1= p->data;

            }
            p = p->next;
        }
        if(p->data == num)
        {
            num1 = p->data;
        }
    if(num1 == num){
    
    printf("\nYour value is in the link list :)");
    }
    else{
    printf("\nOops ! try different value (..)");
    }
}

void max2()
{

struct node *p=root;
int max=-9999,maxi=-999;

while(p != NULL)

{
    if(max <= p->data )
    {
        max = p->data;
    }
    p= p->next;
}

printf("\nThe 2nd maximum value in the linklist = %d",maxi);
}

void del()
{

struct node *temp;
int a;
printf("\nEnter the number:-");
scanf("%d",&a);

if(a==1)
{
    temp=root;
    root=temp->next;
    temp->next=NULL;
}


else
{
    struct node *p=root,*q;
    int b=1;
    while(b<(a-1))
    {
        p=p->next;
        b++;

    }
    q=p->next;
    p->next= q->next;
    q->next=NULL;
}
}

void find(){
    struct node *p=root,*q=root;
    int c=0,a,b,d,e;
    printf("\nEnter which number of value do you want to replace to which nuber value:-");
    scanf("%d%d",&a,&b);

    while(p!= NULL)
    {
        c++;
        if(c==a)
        {
            d=p->data;

        }
        p=p->next;
    }
    c=0;
    
    while(q!=NULL){

        c++;
        if(c==b)
        {
            e=q->data;
            q->data=d;
        }
        q=q->next;
    }
    
    c=0;
    q=root;
    while(q!=NULL)
    {
        c++;
        if(c==a)
        {
            q->data=e;
        }
        q=q->next;
    
    }
    q=root;
    while(q!=NULL)
    {
        printf("\n%d",q->data);
        q=q->next;
    }
    
}

void dec()
{

struct node *ptr1=root,*ptr2;
int temp;

while(ptr1->next !=NULL)
{
    ptr2=ptr1->next;

    while(ptr2!= NULL)
    {
        if(ptr2->data > ptr1->data)
        {
        temp=ptr2->data;
        ptr2->data=ptr1->data;
        ptr1->data = temp;
        }
        ptr2 = ptr2->next;

        }
        ptr1= ptr1->next;
}
display();

}
void acen()
{
    struct node *ptr1=root,*ptr2;
   int temp;

   while(ptr1->next != NULL)
   {
    ptr2=ptr1->next;
    while(ptr2 != NULL)
    {
        if(ptr2->data < ptr1->data )
        {
            temp= ptr2->data;
            ptr2->data= ptr1->data;
            ptr1->data= temp;

        }
        ptr2=ptr2->next;
    }
    ptr1=ptr1->next;
   }
   display();
}
//doubly link list 

void append()
{
    
    struct nod *tem;
    tem= (struct nod *)malloc(sizeof(struct nod));

    printf("\nEnter a value:-");
    scanf("%d",&tem->data);

    tem->prev=NULL;
    tem->next= NULL;
    if(rot == NULL)
    {
        rot = tem;

    }
    else{
        struct nod *p=rot;
        while(p->next != NULL)
        {
            p=p->next;

        }
        p->next= tem;
        tem->prev=p;
    }
}
void show()
{
    struct nod *p= rot;
    while(p!=NULL)
    {
        printf("\n%d",p->data);
        p=p->next;
    }
}

void adress()
{
    struct nod *p=rot;
    printf("\nPrev   data   next");
    while(p!=NULL)
    {
        printf("\n%u,%d,%u",p->prev,p->data,p);
        p=p->next;
    }
}

void rev()
{
    struct nod *p=rot;
    while(p->next!= NULL)
    {
        p=p->next;
        
    }
  
    while(p->prev!=NULL)
    {

        printf("\n%d",p->data);
        p=p->prev;
    }
    printf("\n%d",p->data); 
}

void cpy()
{
    struct nod *p=rot;

    while(p!=NULL)
    {
       
        if(p->data %2==0)
        {
            printf("\n%d",p->data);

        }
        p=p->next;

    }
    
    
}

void eoppa()
{

    struct nod *p=rot;
    int e=0,o=0,pali=0;
    int b,rem,rev=0;
    while(p!=NULL)
    {

	if(p->data %2 == 0)
	{
	  e++;
	}
	else
	{
	    o++;
	}

	b=p->data;

	while(b>0)
	{
	    rem=b%10;
	    rev=rev*10+rem;
	    b=b/10;
	}
	if(rev==p->data)
	{
	    pali++;
	}
	p=p->next;
    }
    printf("\nTotal even= %d",e);
    printf("\nTotal Odd = %d",o);
    printf("\nTotal pelindrom number = %d",pali);
}

void add50()
{
    struct nod *p=rot;
    int b,rev=0,rem;
    while(p!=NULL)

    {
        b=p->data;
         while(b>0)
         {
            rem=b%10;
            rev=rev*10+rem;
            b=b/10;
         }
         if(rev==p->data)
         {
        p->data=p->data+50;
         }
        p=p->next;
    }
    show();
}

void count1()
{
    int c=0;
    struct nod *p=rot;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    printf("\nTotal nodes are = %d",c);
}
void accen()
{
    struct nod *p1=rot,*p2;
    int temp;

    while(p1->next!= NULL)
    {
        p2=p1->next;
        
        while(p2!=NULL)
        {
        if(p2->data <= p1->data)
        
        {
            temp=p2->data;
            p2->data=p1->data;
            p1->data=temp;
        }
        p2=p2->next;
        }
        p1=p1->next;
    }
    show();
}
