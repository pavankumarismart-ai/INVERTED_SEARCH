#include "inverted.h"

int main(int argc, char *argv[])
{
    F_node *head = NULL;
    M_node *HT[27];

    // Validate_files
   void validate_files(char *argv[], F_node **head)
   {
	  if(argc != 2)
	    printf("Enter valid arguments\n");
	    return 0;
   }
//    if(strstr(fp,.txt)== 1);
   if(strcmp(strstr(fp,.txt)))
   {
      return SUCCESS;
   }
   fopen(fp,"r");
   if(fp != NULL)
   {
	
   }
    int option;
    do
    {
	printf("Select your choice among following operations:\n1. Create Database\n2. Display Database\n3. Save Database\n4. Search Database\n5. Update Database\n6. Exit\n\nEnter your choice : ");

	scanf("%d", &option);

	switch (option)
	{
	    case 1:
		create_database(HT, head);
		break;

	    case 2:
		display_database(HT);
		break;

	    case 3:
		save_database(HT);
		    break;

	    case 4:
		search_database(HT);
		break;

	    case 5:
		update_database(HT, &head);
		break;

	    case 6:
		break;

	    default:
		printf("INFO : Please enter the valid option\n");
	}
    }while( option != 6 );

    return 0;
}
