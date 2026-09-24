#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contact.h"
#include "file.h"
#include "populate.h"

void listContacts(AddressBook *addressBook, int sortCriteria) 
{
    // Sort contacts based on the choosen criteria
    
}

void initialize(AddressBook *addressBook) {
    addressBook->contactCount = 0;
    
    // Load contacts from file during initialization (After files)
    //loadContactsFromFile(addressBook);
}

void saveAndExit(AddressBook *addressBook) {
    saveContactsToFile(addressBook); // Save contacts to file
    exit(EXIT_SUCCESS); // Exit the program
}


void createContact(AddressBook *addressBook)
{
	int found=0;
    printf("Enter name:");
    scanf("%[^\n]",contacts[contactCount].name);
    if(strlen(contacts[contactCount].name) >= 2)
    {
        for(int i=0;i<strlen(contacts[contactCount].name;i++)
        if(contacts[contactCount].name[i] >= 'A' && contacts[contactCount].name[i] <= 'Z' || contacts[contactCount].name[i] >= 'a'&& contacts[contactCount].name[i] <= 'z'|| contacts[contactCount].name[i] == ' ')
        {
            found=1;
        }
        
    }
    else
    {
        found=0;
        printf("Error");
    }
    while(found==0)
    {
        found=1;
        printf("Enter a valid name:");
        scanf("%[^\n]",contacts[contactCount].name);
        if(strlen(contacts[contactCount].name) >= 2)
         {
            found=1;
            for(int i=0;i<strlen(contacts[contactCount].name;i++)
            {
                if(contacts[contactCount].name[i] >= 'A' && contacts[contactCount].name[i] <= 'Z' || contacts[contactCount].name[i] >= 'a'&& contacts[contactCount].name[i] <= 'z'|| contacts[contactCount].name[i] == ' ')
                 {
                    found=0;
                    break;
                 }
            }
         }
    }/* Define the logic to create a Contacts */
    
}

void searchContact(AddressBook *addressBook) 
{
    /* Define the logic for search */
}

void editContact(AddressBook *addressBook)
{
	/* Define the logic for Editcontact */
    
}

void deleteContact(AddressBook *addressBook)
{
	/* Define the logic for deletecontact */
   
}
