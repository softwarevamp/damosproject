
#ifndef XOR_CPP
#define XOR_CPP

#include "xor.h"

using namespace std;

void xorEncryptArgument(string &encryptionKey, string &rawText, string &processedText)
{
	uint32_t encryptionIndex = 0;
		
	for(unsigned int i = 0; i < rawText.length(); i++) 
	{
		processedText += (rawText[i] ^= encryptionKey[encryptionIndex]);

		if(encryptionIndex < encryptionKey.length()) 
		{
			encryptionIndex++;
		}
		else
		{
			encryptionIndex = 0;
		}
	}
}


void xorEncryptStream(string &encryptionKey, ifstream &currentFile, ofstream &encryptedOutput)
{
	char      currentChar;
	uint32_t  encryptionIndex = 0;

	while(currentFile.get(currentChar)) 
	{
		encryptedOutput << (currentChar ^= encryptionKey[encryptionIndex]);

		if(encryptionIndex < (encryptionKey.length() - 1))
		{
			encryptionIndex++;
		}
		else
		{
			encryptionIndex = 0;
		}
	}
}


void xorDecryptArgument(string &encryptionKey, string &rawText, string &processedText)
{
	uint32_t encryptionIndex = 0;
		
	for(unsigned int i = 0; i < rawText.length(); i++) 
	{
		processedText += (rawText[i] ^= encryptionKey[encryptionIndex]);

		if(encryptionIndex < encryptionKey.length()) 
		{
			encryptionIndex++;
		}
		else
		{
			encryptionIndex = 0;
		}
	}
}


void xorDecryptStream(string &encryptionKey, ifstream &currentFile, ofstream &decryptedOutput)
{
	char      currentChar;
	uint32_t  encryptionIndex = 0;

	while(currentFile.get(currentChar)) 
	{
		decryptedOutput << (currentChar ^= encryptionKey[encryptionIndex]);

		if(encryptionIndex < (encryptionKey.length() - 1))
		{
			encryptionIndex++;
		}
		else
		{
			encryptionIndex = 0;
		}
	}
}

#endif
