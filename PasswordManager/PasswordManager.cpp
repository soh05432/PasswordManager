#pragma once

#include "PasswordManager.h"

#define COND(cond) cond

#if defined _DEBUG
#define Assert(cond, text) if (COND(cond)) {} else { printf("Assert: %s", text); __debugbreak(); }
#else
#define Assert(cond, text) cond
#endif

int PasswordManager::addAccount( const string& name, const string& username, const string& password )
{
	fstream fs;

	if ( fs.is_open() )
	{
		fs << name << ", " << username << ", " << password << endl;

		return 0;
	}

	return -1;
}

int PasswordManager::removeAccount( const string& name )
{
	fstream fs;

	if ( fs.is_open() )
	{
		
	}
}