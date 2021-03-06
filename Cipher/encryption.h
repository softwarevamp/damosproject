
#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include "header.h"

using namespace std;

void encryptArgument(string &encryptionKey, string &rawText, string &processedText);
void encryptStream(string &encryptionKey, ifstream &currentFile, ofstream &encryptedOutput);

int encryptConfigurationFiles(LinkedList<string> &blacklistedFiles, LinkedList<string> &blacklistedExtensions);
int encryptFile(string currentFilename, LinkedList<string> &blacklistedFiles, LinkedList<string> &blacklistedExtensions);
int encryptAllInDirectory(string &encryptionKey, LinkedList<string> &blacklistedFiles, LinkedList<string> &blacklistedExtensions);

#endif
