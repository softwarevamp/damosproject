
#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include "linkedList.h"

class MenuItem
{
	private:
		std::string 		mName;
		std::string		mExecutableName;
		LinkedList<std::string> mDescription;

	public:
		MenuItem();
		MenuItem(std::string name);
		MenuItem(std::string name, std::string executableName);

		~MenuItem();
		
		void setExecutableName(std::string executableName);
		void addToDescription(std::string &moreInformation);

		std::string getName();
		std::string getExecutableName();

		LinkedList<std::string> getDescription();
};

#endif
