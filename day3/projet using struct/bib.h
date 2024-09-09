struct contact
{
    char nom[50];
    char tele[50];
    char email[50];
};
char nom[50];
char tele[50];
char email[50];
int n;
struct contact contactlist[50];
void AddContact();
void updateContact();
void deletContact();
void showContact();
void serch();
