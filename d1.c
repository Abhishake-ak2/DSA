#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>

struct node
{ int data;
  struct node *nxt;
}*head,*newnode,*prenode,*ptr;

void llmake()
{ 
  { printf("---------------------------------\n");
    printf("| Node | Data | Address |  Next |\n");
    printf("---------------------------------\n");
    printf("|  %d   |  %d   |   %d  |  %d |\n",i,ptr->data,ptr,ptr->nxt);
    printf("---------------------------------\n");
    if(ptr->nxt!=NULL)
    { printf("               |\n");
      printf("               v\n");
    }
    ptr=ptr->nxt;
    i++;
    delay(750);
  }while(ptr!=NULL);
}

void main()
{ clrscr();
  printf("LL creation :-\n\n");
  llmake();
  displaycll();
  printf("\nPress any key to EXIT...");
  getch();
}
