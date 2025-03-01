#include "main.h"
// Karol Mata

int main() {
    int userSelection;
    do {
        printMainMenu();
        scanf("%d", &userSelection);
        processUserSelection(userSelection);
    } while(userSelection != EXIT);
    return 0;
}

/* Funciones del Main Menu */
void printMainMenu() {
    printf("----- Main Menu -----\n");
    printf("1. Create Data Dictionary\n");
    printf("2. Open Data Dictionary\n");
    printf("0. Exit\n");
}

void processUserSelection(int usSelec) {
    switch(usSelec) {
        case CREATE_DD:
            createDataDictionary();
            break;
        case OPEN_DD:
            openDataDictionary();
            break;
        case EXIT:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid option in Main Menu.\n");
            break;
    }
}

void createDataDictionary() {
    printf("Stub: Create Data Dictionary. Functionality will be implemented later.\n");
}

void openDataDictionary() {
    int ddSelection;
    do {
        printf("Stub: Open Data Dictionary. This will open the DD Menu.\n");
        printDDMenu();
        scanf("%d", &ddSelection);
        processDDSelection(ddSelection);
    } while(ddSelection != DD_RETURN);
}

/* Funciones del Data Dictionary (DD) Menu */
void printDDMenu() {
    printf("----- Data Dictionary Menu -----\n");
    printf("1. Print DD\n");
    printf("2. Create Entity\n");
    printf("3. Delete Entity\n");
    printf("4. Modify Entity\n");
    printf("5. Select Entity (opens Entity Menu)\n");
    printf("0. Return to Main Menu\n");
}

void processDDSelection(int ddSelec) {
    switch(ddSelec) {
        case DD_PRINT:
            printDD();
            break;
        case DD_CREATE_ENTITY:
            createEntity();
            break;
        case DD_DELETE_ENTITY:
            deleteEntity();
            break;
        case DD_MODIFY_ENTITY:
            modifyEntity();
            break;
        case DD_SELECT_ENTITY:
            selectEntity();
            break;
        case DD_RETURN:
            printf("Returning to Main Menu...\n");
            break;
        default:
            printf("Invalid option in DD Menu.\n");
            break;
    }
}

void printDD() {
    printf("Stub: Print Data Dictionary.\n");
}

void createEntity() {
    printf("Stub: Create Entity.\n");
}

void deleteEntity() {
    printf("Stub: Delete Entity.\n");
}

void modifyEntity() {
    printf("Stub: Modify Entity.\n");
}

void selectEntity() {
    int entSelection;
    do {
        printf("Stub: Select Entity. This will open the Entity Menu.\n");
        printEntityMenu();
        scanf("%d", &entSelection);
        processEntitySelection(entSelection);
    } while(entSelection != ENT_RETURN);
}

/* Funciones del Entity Menu */
void printEntityMenu() {
    printf("----- Entity Menu -----\n");
    printf("1. Create Attribute\n");
    printf("2. Delete Attribute\n");
    printf("3. Modify Attribute\n");
    printf("4. Create Data Record\n");
    printf("0. Return to DD Menu\n");
}

void processEntitySelection(int entSelec) {
    switch(entSelec) {
        case ENT_CREATE_ATTRIBUTE:
            createAttribute();
            break;
        case ENT_DELETE_ATTRIBUTE:
            deleteAttribute();
            break;
        case ENT_MODIFY_ATTRIBUTE:
            modifyAttribute();
            break;
        case ENT_CREATE_DATA_RECORD:
            createDataRecord();
            break;
        case ENT_RETURN:
            printf("Returning to DD Menu...\n");
            break;
        default:
            printf("Invalid option in Entity Menu.\n");
            break;
    }
}

void createAttribute() {
    printf("Stub: Create Attribute.\n");
}

void deleteAttribute() {
    printf("Stub: Delete Attribute.\n");
}

void modifyAttribute() {
    printf("Stub: Modify Attribute.\n");
}

void createDataRecord() {
    printf("Stub: Create Data Record.\n");
}