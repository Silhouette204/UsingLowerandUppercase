
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

   char let;
   char string[] = "Mahal kita";

   cout << "Choose letter U for Upper or L for Lower : ";
   cin  >> let;

   cout << "Original String: " << string << "\n";

   if (let == 'U') {

   cout << "In Uppercase: " << endl;

   for (int i = 0; i < strlen(string); i++)
       putchar (toupper(string[i]));
   }

   else if (let == 'L') {

       cout << "In Lowercase: " << endl;

     for (int i = 0; i < strlen(string); i++)
       putchar (tolower(string[i]));
   }
   else {
       cout << "Unavailable Letter!";
   }
    return 0;
}

