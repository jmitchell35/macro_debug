#include "main.h"

int main(int argc, char *argv[])
{
	DEBUG_MSG("Entry point - starting main function");
	if (argc != 4)
	{
		DEBUG_MSG("Il faut trois arguments passes en ligne de commande");
		return (1);
	}
	return (0);
}
