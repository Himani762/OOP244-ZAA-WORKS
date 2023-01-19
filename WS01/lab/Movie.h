/***********************************************************************
// Workshop 1 p1: tester program
//
// File Movie.h
// Version 1.0
// Date JAN 19 winter 2023
// Author Duc Minh Pham
// ID: 103055224
// Email: dpham34@myseneca.ca
// Revision History
// -----------------------------------------------------------
// Name Duc Minh Pham    Date Jan 19 2023   Reason update files
/////////////////////////////////////////////////////////////////
***********************************************************************/

#ifndef SDDS_MOVIE_H // replace NAMESPACE and HEADERFILENAME with relevant names
#define SDDS_MOVIE_H

// Your header file content goes here
namespace sdds
{
   struct Movie
   {
      char m_title[128];
      int m_year;
      char m_rating[6];
      int m_duration;
      char m_genres[10][11];
      float m_consumerRating;
   };
   bool loadMovies();
   bool hasGenre(const Movie *mvp, const char genre[]);
   void displayMovie(const Movie *mvp);
   void displayMoviesWithGenre(const char genre[]);
}
#endif