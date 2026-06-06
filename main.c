#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book books[100];
    int n = 0, choice, searchId, i;
    int found;

    do {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &books[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", books[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", books[n].author);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No Books Available!\n");
                } else {
                    printf("\n--- Book Records ---\n");
                    for(i = 0; i < n; i++) {
                        printf("\nBook ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                    }
                }
                break;

            case 3:
                found = 0;
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(books[i].id == searchId) {
                        printf("\nBook Found!\n");
                        printf("Book ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        found = 1;
                        break;
                    }
                }

                if(found == 0) {
                    printf("Book Not Found!\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
