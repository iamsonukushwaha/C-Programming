#include <stdio.h>

struct create_account {
	char Username[50];
	long long contact_no;
	char profession[20];
	char level[20];
} s;

int main() {
	printf("\n\t** Fill the Required answers Below **\t\n\n");
	printf("Enter First name : ");
	scanf("%s", s.Username);
	printf("Enter your contact number : ");
	scanf("%lld", &s.contact_no);
	printf("Enter your profession: ");
	scanf("%s", &s.profession);
	printf("Your Qualification level: ");
	scanf("%s", &s.level);
	printf("\n\n");
	printf("\n\n\t** Displaying Information **\t\n\n");
	printf("\nUser name : %s ", s.Username);
	printf("\nContact number : %lld ", s.contact_no);
	printf("\nProfession : %s ", s.profession);
	printf("\nQualification Level : %s ", s.level);

	printf("\n\n\t** Thank You **\t\n\n");

	return 0;
}