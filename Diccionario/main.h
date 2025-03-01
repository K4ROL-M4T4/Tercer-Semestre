#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_LENGHT 100

typedef struct Register {
    char name[STRING_LENGHT];
    int generation;
    int semester;
} REGISTER;

// Main Menu: 0 = Exit, 1 = Create Data Dictionary, 2 = Open Data Dictionary
enum {
    EXIT,
    CREATE_DD,
    OPEN_DD
} MAIN_OPTION;

// Data Dictionary (DD) Menu: 0 = Return, 1 = Print DD, 2 = Create Entity, 3 = Delete Entity,
// 4 = Modify Entity, 5 = Select Entity
enum {
    DD_RETURN,
    DD_PRINT,
    DD_CREATE_ENTITY,
    DD_DELETE_ENTITY,
    DD_MODIFY_ENTITY,
    DD_SELECT_ENTITY
} DD_OPTION;

// Entity Menu: 0 = Return, 1 = Create Attribute, 2 = Delete Attribute, 3 = Modify Attribute,
// 4 = Create Data Record
enum {
    ENT_RETURN,
    ENT_CREATE_ATTRIBUTE,
    ENT_DELETE_ATTRIBUTE,
    ENT_MODIFY_ATTRIBUTE,
    ENT_CREATE_DATA_RECORD
} ENT_OPTION;

/* Prototipos de funciones para el Main Menu */
void printMainMenu();
void processUserSelection(int usSelec);
void createDataDictionary();
void openDataDictionary();

/* Prototipos de funciones para el Data Dictionary (DD) Menu */
void printDDMenu();
void processDDSelection(int ddSelec);
void printDD();
void createEntity();
void deleteEntity();
void modifyEntity();
void selectEntity();

/* Prototipos de funciones para el Entity Menu */
void printEntityMenu();
void processEntitySelection(int entSelec);
void createAttribute();
void deleteAttribute();
void modifyAttribute();
void createDataRecord();

#endif