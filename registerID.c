typedef struct ID {
	char name[15];
	char surname[20];
	char username[20];
	int id;             /* Unique Identification Key */
	char password[20];
	char address[150];
	char phone_no[10];
} ID;

ID store[100];

void checkUserName(char uname) {
	 while (i < 150) {
			if(cnt == 0) 
				return;
			else if(username == store[i].username) {
				printf("Username already in use. Please enter a new username\n");
				scanf("%s", uname);
				checkUserName(uname);
			}	
			else { 
				return;
			}	
	}
}	
void createID(char name, char surname, char address, char phone_no) {
	char uname[20], pass[20];;
	static ct = 0
	int n = 1, max = 100;
	time_t tt;
	scanf("%d%d", &n, &max);
	srandom(time(&tt));
	printf("Enter username\n");
	scanf("%s", uname);	
	checkUserName(uname);
	printf("Enter your password\n");
	scanf("%s", pass);
	strcpy(store[ct].username, uname);
	strcpy(store[ct].name, name);
	strcpy(store[ct].surname, surname);
	store[ct].id =  (random() % max);
	strcpy(store[ct].password, password);
	strcpy(store[ct].address, address);
	strcpy(store[ct].phone_no, phone_no);
	
} 	
		
 


