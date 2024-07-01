#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone_number[15];
    struct Contact* next;
};

struct Contact* head = NULL;

void add_contact() {
    struct Contact* new_contact = (struct Contact*) malloc(sizeof(struct Contact));

    printf("Enter the name: ");
    scanf("%s", new_contact->name);
    printf("Enter the phone number: ");
    scanf("%s", new_contact->phone_number);

    new_contact->next = head;
    head = new_contact;

    printf("Contact added successfully.\n");
}

void delete_contact() {
    char name[50];

    printf("Enter the name of the contact to delete: ");
    scanf("%s", name);

    struct Contact* current = head;
    struct Contact* previous = NULL;

    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            if (previous == NULL) {
                head = current->next;
            } else {
                previous->next = current->next;
            }
            free(current);
            printf("Contact deleted successfully.\n");
            return;
        }
        previous = current;
        current = current->next;
    }

    printf("Contact not found.\n");
}

void search_contact() {
    char name[50];

    printf("Enter the name of the contact to search for: ");
    scanf("%s", name);

    struct Contact* current = head;

    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            printf("Name: %s\n", current->name);
            printf("Phone number: %s\n", current->phone_number);
            return;
        }
        current = current->next;
    }

    printf("Contact not found.\n");
}

void display_directory() {
    struct Contact* current = head;

    if (current == NULL) {
        printf("The directory is empty.\n");
    } else {
        printf("Contact List:\n");
        while (current != NULL) {
            printf("Name: %s\n", current->name);
            printf("Phone number: %s\n", current->phone_number);
            current = current->next;
        }
    }
}
int main() {
    int choice;

    while (1) {
        printf("Phone Directory\n");
        printf("1. Add contact\n");
        printf("2. Delete contact\n");
        printf("3. Search contact\n");
        printf("4. Display directory\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_contact();
                break;
            case 2:
                delete_contact();
                break;
            case 3:
                search_contact();
                break;
            case 4:
                display_directory();
                break;
            case 5:
                printf("Exiting the program...\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
    }

    return 0;
}