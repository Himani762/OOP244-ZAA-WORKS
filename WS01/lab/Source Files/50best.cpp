#include <iostream>
#include "/Users/phamducminh/Documents/OOP244-ZAA/OOP244-ZAA-WORKS/WS01/lab/Header Files/movie.h"
using namespace std;
using namespace sdds;

namespace sdds
{
   void flushkeys()
   {
      while (cin.get() != '\n')
         ;
   }
   bool yes()
   {
      char ch = cin.get();
      flushkeys();
      return ch == 'y' || ch == 'Y';
   }
   int main()
   {
      bool done = false;
      char genre[128];
      loadMovies();
      cout << "Welcome to 50 top movies of all times \"genre\" search." << endl
           << endl;
      while (!done)
      {
         cout << "Enter the movie genre to start the search: ";
         cin >> genre;
         flushkeys();
         displayMoviesWithGenre(genre);
         cout << "Do another search? (Y)es: ";
         done = !yes();
         cout << endl;
      }
      cout << "Goodbye!" << endl;
      return 0;
   }
}
int main()
{
   bool done = false;
   char genre[128];
   loadMovies();
   cout << "Welcome to 50 top movies of all times \"genre\" search." << endl
        << endl;
   while (!done)
   {
      cout << "Enter the movie genre to start the search: ";
      cin >> genre;
      flushkeys();
      displayMoviesWithGenre(genre);
      cout << "Do another search? (Y)es: ";
      done = !yes();
      cout << endl;
   }
   cout << "Goodbye!" << endl;
   return 0;
}
