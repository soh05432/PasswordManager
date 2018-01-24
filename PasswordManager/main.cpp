#include "PasswordManager.h"

#include <string>

using namespace std;

int main( int argc, char* argv[] )
{
	string name, username, password;

	PasswordManager::addAccount( "gmail", "god@gmail.com", "trustno1" );
	PasswordManager::addAccount( "netflix", "god@gmail.com", "trustno2" );
	PasswordManager::removeAccount( "gmail" );

	return 0;
}