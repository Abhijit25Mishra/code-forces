#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *next;
};

void display(struct node **head)
{
    if (*head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        printf("Elements in the linked list :\n");
        struct node *temp = *head;
        while (temp != NULL)
        {
            if (temp->next == NULL)
            {
                printf("%d", temp->item);
            }
            else
            {
                printf("%d -> ", temp->item);
            }
            temp = temp->next;
        }
    }
    printf("\n");
}

void insBeg(struct node **head)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    int n;
    scanf("%d", &n);
    newnode->item = n;
    newnode->next = *head;
    *head = newnode;
}

void insEnd(struct node **head)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    int n;
    scanf("%d", &n);
    newnode->item = n;
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        struct node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void insPos(struct node **head)
{
    int pos, n;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d %d", &pos, &n);
    newnode->item = n;
    if (pos == 1)
    {
        newnode->next = *head;
        *head = newnode;
    }
    else
    {
        struct node *temp = *head;
        int c = 1;
        if (*head == NULL)
        {
            printf("!!! ERROR !!!\n");
        }
        else
        {
            while (c < (pos - 1))
            {
                c++;
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
}

void delBeg(struct node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = *head;
        *head = temp->next;
        free(temp);
    }
}

void delEnd(struct node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = *head;
        if (temp->next == NULL)
        {
            *head = NULL;
        }
        else
        {
            temp = temp->next;
            struct node *pre = *head;
            while (temp->next != NULL)
            {
                pre = pre->next;
                temp = temp->next;
            }
            pre->next = NULL;
        }
        free(temp);
    }
}

void delPos(struct node **head)
{
    int pos;
    scanf("%d", &pos);
    if (*head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = *head;
        if (pos == 1)
        {
            *head = temp->next;
            free(temp);
        }
        else
        {
            int c = 2;
            struct node *pre = *head;
            temp = temp->next;
            while (c < pos)
            {
                if (temp->next == NULL)
                {
                    printf("!!! ERROR !!!\n");
                    return;
                }
                else
                {
                    pre = pre->next;
                    temp = temp->next;
                    c++;
                }
            }
            pre->next = temp->next;
            free(temp);
        }
    }
}

int main()
{
    struct node *head = NULL;
    while (1)
    {
        char input;
        scanf("%c", &input);
        switch (input)
        {
        case 'a':
            display(&head);
            break;
        case 'b':
            insBeg(&head);
            break;
        case 'c':
            insEnd(&head);
            break;
        case 'd':
            insPos(&head);
            break;
        case 'e':
            delBeg(&head);
            break;
        case 'f':
            delEnd(&head);
            break;
        case 'g':
            delPos(&head);
            break;
        case '\n':
            break;
        default:
            printf("!!! ERROR !!!\n");
            break;
        }
        if (input == 'a')
            break;
    }

    return 0;
}