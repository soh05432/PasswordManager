#pragma once

#include <string>
#include <fstream>

using namespace std;

namespace PasswordManager
{
	int addAccount( const string& name, const string& username, const string& password );

	int removeAccount( const string& name );
}