#include <iostream>
#include "postfix.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"
#include "stack"
using namespace std;

//These file should contain the main procedure

int getResult(istream &stream)
{

   char z1;
   char z2;
   int res;
   Stack calcul = Stack(10);
   locale loc;
   string input;

   while (stream >> input)
   {
      // cout << input << endl;

      if (isdigit(input[0]))
      {
         // cout << " digit!\n";
         calcul.push(input);
      }
      else if (input == "+" || input == "-" || input == "*" || input == "/" || input == "%")
      {
         // cout << " operator!\n";

         z1 = calcul.pop();
         // cout << z1 << endl;
         z2 = calcul.pop();
         // cout << z2 << endl;
         
         int ergebnis = calcul.rechnen(z1, z2, input);

         calcul.push(to_string(ergebnis));
      }
      else if(input == "="){
         return calcul.pop();
      }
      else
      {
         cout << "unknown character or Finish" << endl;
         break;
      }
   }
}
// }
