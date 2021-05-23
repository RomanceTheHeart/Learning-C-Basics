// random_shuffle.cpp
// compile with: /EHsc
// Illustrates how to use the random_shuffle
// function.
//
// Functions:
//     random_shuffle : Shuffle the elements in a random order.
//////////////////////////////////////////////////////////////////////

// disable warning C4786: symbol greater than 255 character,
// okay to ignore
#pragma warning(disable: 4786)

#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std ;

int main() {
   const int VECTOR_SIZE = 8 ;

   // Define a template class vector of int
   typedef vector<int> IntVector ;

   //Define an iterator for template class vector of strings
   typedef IntVector::iterator IntVectorIt ;

   IntVector Numbers(VECTOR_SIZE) ;

   IntVectorIt start, end, it ;

   // Initialize vector Numbers
   Numbers[0] = 4 ;
   Numbers[1] = 10;
   Numbers[2] = 70 ;
   Numbers[3] = 30 ;
   Numbers[4] = 10;
   Numbers[5] = 69 ;
   Numbers[6] = 96 ;
   Numbers[7] = 100;

   // location of first element of Numbers
   start = Numbers.begin();

   // one past the location last element of Numbers
   end = Numbers.end();

   cout << "Before calling random_shuffle" << endl ;

   // print content of Numbers
   cout << "Numbers {" ;
   for (it = start; it != end; it++)
      cout << " " << *it;
   cout << " }" << endl ;

   // shuffle the elements in a random order
   random_shuffle(start, end) ;

   cout << "After calling random_shuffle" << endl ;

   cout << "Numbers {" ;
   for (it = start; it != end; it++)
      cout << " " << *it;
   cout << " }" << endl ;
}