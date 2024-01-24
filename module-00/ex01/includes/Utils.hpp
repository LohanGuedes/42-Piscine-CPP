#ifndef UTILS_H
#define UTILS_H

#include <iomanip>
#include <iostream>
#include <string>

#include "Contact.hpp"

std::string getInput(std::string prompt);
std::string truncate(std::string str);

int throwError(std::string error);
bool isValidInput(std::string input);
void printUsage();
void emptyInputError();

void emptyTableWarning();
void printHeader();
void printFooter();
void printContactRow(int index, Contact contact);

#endif
