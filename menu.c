#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

/*Under construction*/
int main() {
	printf("Welcome to the rail booking system\n");
	int select;
	printf("Select from the menu below what you wish to do\n");
	while(1) {
		case(select) {
			case 1 :printf("Register\n");
				/*selcting this option will ask for user details using a link*/
				createID(char name, char surname, char address, char phone_no); 
				break;
			case 2 :printf("Book ticket\n");
				book()
				break;
			case 3 :printf("Check trains\n");
				break;
			case 4: printf("Check ticket status\n");
				printf("Enter id and train no\n");
				scanf("%d%d", &id, &train_no);
				status(id);
				break;
			case 5: printf("Cancel ticket\n");
				cancelticket()
				break;	
			case 6: printf("Print ticket\n");
				printticket();
				break;		
			case 7: exit(1);
				break;
			default: printf("Incorrect option. Please select again\n"); 
		}
	
}
