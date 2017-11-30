#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {



   ///*For testing purposes
   bool key;
   int value;

    srand(time(0));
    value = rand() % 2;
    cout << value;

   if (value == 0){
    key = true;
   }
   else {
    key = false;
   }

   //*/

    srand(time(0));
    value = rand() % 16;
    cout << value;

   cout << key << endl;
   if (key) {
        cout << "You have landed on a Community Card." << endl;
   switch(value) {
      case 1 :
        cout << "Advance to Go & Collect $200." << endl;
        //add_money(200);
        //move_to_position();
         break;
      case 2 :
         cout << "Bank error in your favor & Collect $200." << endl;
         //add_money(200);
         break;
      case 3 :
         cout << "Doctor's fees & Pay $50." << endl;
         //subtract_money(50);
         break;
      case 4 :
         cout << "From sale of stock you get $50." << endl;
         //add_money(200);
         break;
      case 5 :
         cout << "Get Out of Jail Free - This card may be kept until needed or sold." << endl;
         break;
      case 6 :
         cout << "Go to Jail - Go directly to jail - Do not pass Go & Do not collect $200." << endl;
         break;
      case 7 :
         cout << "Grand Opera Night - Collect $50 from every player for opening night seats." << endl;
         break;
      case 8 :
         cout << "Holiday Fund matures - Receive $100." << endl;
         //add_money(100);
         break;
      case 9 :
         cout << "Income tax refund - Collect $20." << endl;
         //add_money(20);
         break;
      case 10 :
         cout << "It is your birthday - Collect $10 from each player." << endl;
         break;
      case 11 :
         cout << "Life insurance matures - Collect $100." << endl;
         //add_money(100);
         break;
      case 12 :
         cout << "Pay hospital fees of $100." << endl;
         //subtract_money(100);
         break;
      case 13 :
         cout << "Pay school fees of $150." << endl;
         //subtract_money(150);
         break;
      case 14 :
         cout << "Receive $25 consultancy fee." << endl;
         //add_money(25);
         break;
      case 15 :
         cout << "You are assessed for street repairs - $40 per house - $115 per hotel." << endl;
         break;
      case 16 :
         cout << "You have won second prize in a beauty contest - Collect $10." << endl;
         //add_money(10);
         break;
      case 17 :
         cout << "You inherit $100." << endl;
         //add_money(100);
         break;
        }
   }

   else {
         cout << "You have landed on a Chance Card." << endl;
   switch(value) {
      case 1 :
         cout << "Advance to Go & Collect $200." << endl;
        //add_money(200);
        //move_to_position();
         break;
      case 2 :
         cout << "Advance to Illinois Ave & If you pass Go, then collect $200." << endl;
        //add_money(200);
        //move_to_position();
         break;
      case 3 :
         cout << "Advance to St. Charles Place & If you pass Go, then collect $200." << endl;
        //add_money(200);
        //move_to_position();
         break;
      case 4 :
         cout << "Advance to nearest Utility & If unowned, then you may buy it from the Bank & If owned, then throw dice and pay owner a total ten times the amount thrown." << endl;
         //move_to_position();
         break;
      case 5 :
         cout << "Advance to the nearest Railroad and pay owner twice the rental to which he/she is otherwise entitled. If Railroad is unowned, you may buy it from the Bank." << endl;
         //move_to_position();
         break;
      case 6 :
         cout << "Bank pays you dividend of $50." << endl;
         //add_money(50);
         break;
      case 7 :
         cout << "Get out of Jail Free - This card may be kept until needed, or traded/sold." << endl;
         break;
      case 8 :
         cout << "Go Back 3 Spaces." << endl;
         //move(-3);
         break;
      case 9 :
         cout << "Go to Jail - Go directly to Jail - Do not pass Go, do not collect $200." << endl;
         //move_to_position();
         break;
      case 10 :
         cout << "Make general repairs on all your property - For each house pay $25 - For each hotel $100." << endl;
         break;
      case 11 :
         cout << "Pay poor tax of $15." << endl;
         //subtract_money(15);
         break;
      case 12 :
         cout << "Take a trip to Reading Railroad & If you pass Go, collect $200." << endl;
         break;
      case 13 :
         cout << "Take a walk on the Boardwalk - Advance token to Boardwalk." << endl;
         //move_to_position();
         break;
      case 14 :
         cout << "You have been elected Chairman of the Board - Pay each player $50." << endl;
         break;
      case 15 :
         cout << "Your building {and} loan matures - Collect $150." << endl;
         //add_money(150);
         break;
      case 16 :
         cout << "You have won a crossword competition - Collect $100." << endl;
         //add_money(100);
         break;
            }
   }
   return 0;
}
