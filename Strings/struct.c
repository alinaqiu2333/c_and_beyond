#include <stdio.h>
#include <string.h>

int main() {
	struct contact {
  		char name[30];
    	int phone_number;
    	char address[30];
	};
    
	// Declare and initialize best_friend
	struct contact best_friend;
    strcpy(best_friend.name, "Jane Doe");
    best_friend.phone_number = 377177377;
    strcpy(best_friend.address, "1337 University Avenue");
    return 0;
}