#include "inverted.h"

void create_database(M_node *HT[], F_node *head)
{
    FILE *fp;
    char word[50],filename[100];
    printf("Enter filename\n");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp == NULL)
      printf("Error in opening file");
    get_index(word);
}
