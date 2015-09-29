typedef struct ID {
	char name[15];
	char surname[20];
	char username[20];
	int id;             /* Unique Identification Key */
	char password[20];
	char address[150];
	char phone_no[10];
}

void checkUserName(char uname);
void createID(char name, char surname, char address, char phone_no);
