#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
   const string IN1NAME = "flour";
   const double IN1CAL = 365, IN1FAT = 1, IN1CAR = 76, IN1PRO = 10, IN1CHO = 0;
   const string IN2NAME = "egg";
   const double IN2CAL = 143, IN2FAT = 10, IN2CAR = 1, IN2PRO = 13,
      IN2CHO = 0.423;
   const string IN3NAME = "milk";
   const double IN3CAL = 60, IN3FAT = 3, IN3CAR = 5, IN3PRO = 3, IN3CHO = 0.01;
   const string IN4NAME = "oil";
   const double IN4CAL = 884, IN4FAT = 100, IN4CAR = 0, IN4PRO = 0, IN4CHO = 0;
   const string IN5NAME = "sugar";
   const double IN5CAL = 387, IN5FAT = 0, IN5CAR = 100, IN5PRO = 0, IN5CHO = 0;
   const string INDENT = "   ";
   string recipeName, numSerStr, grams1Str, grams2Str, grams3Str, grams4Str,
      grams5Str, error1, error2;
   error1 = "Error! Serving between 1 and 10 only.";
   error2 = "Error! Amount has to be between 0 and 1000.";
   int numSerInt, grams1Int, grams2Int, grams3Int, grams4Int, grams5Int;
   double in1CalPerSer, in1FatPerSer, in1CarPerSer, in1ProPerSer,
      in1ChoPerSer,
      in2CalPerSer, in2FatPerSer, in2CarPerSer, in2ProPerSer, in2ChoPerSer,
      in3CalPerSer, in3FatPerSer, in3CarPerSer, in3ProPerSer, in3ChoPerSer,
      in4CalPerSer, in4FatPerSer, in4CarPerSer, in4ProPerSer, in4ChoPerSer,
      in5CalPerSer, in5FatPerSer, in5CarPerSer, in5ProPerSer, in5ChoPerSer,
      totalCal = 0, totalFat = 0, totalCar = 0, totalPro = 0, totalCho = 0;
   cout << "Lists of Ingredients:  " << endl;
   cout << INDENT << "Ingredient 1:  " << IN1NAME << endl;
   cout << INDENT << "Ingredient 2:  " << IN2NAME << endl;
   cout << INDENT << "Ingredient 3:  " << IN3NAME << endl;
   cout << INDENT << "Ingredient 4:  " << IN4NAME << endl;
   cout << INDENT << "Ingredient 5:  " << IN5NAME << endl << endl;
   cout << "Give this recipe a name:  ";
   getline(cin, recipeName);
   cout << "\nHow many people are you serving? ";
   getline(cin, numSerStr);
   istringstream(numSerStr) >> numSerInt;
   if ((numSerInt > 10) || (numSerInt < 1))
   {
      cout << endl << error1 << endl << endl;
      return 0;
   }
   cout << "\nHow many grams of " << IN1NAME << " are you using? ";
   getline(cin, grams1Str);
   istringstream(grams1Str) >> grams1Int;
   if ((grams1Int < 0) || (grams1Int > 1000))
   {
      cout << endl << error2 << endl << endl;
      return 0;
   }
   in1CalPerSer = (grams1Int / numSerInt)*(IN1CAL / 100);
   in1FatPerSer = (grams1Int / numSerInt)*(IN1FAT / 100);
   in1CarPerSer = (grams1Int / numSerInt)*(IN1CAR / 100);
   in1ProPerSer = (grams1Int / numSerInt)*(IN1PRO / 100);
   in1ChoPerSer = (grams1Int / numSerInt)*(IN1CHO / 100);
   cout << "How many grams of " << IN2NAME << " are you using? ";
   getline(cin, grams2Str);
   istringstream(grams2Str) >> grams2Int;
   if ((grams2Int < 0) || (grams2Int > 1000))
   {
      cout << endl << error2 << endl << endl;
      return 0;
   }
   in2CalPerSer = (grams2Int / numSerInt)*(IN2CAL / 100);
   in2FatPerSer = (grams2Int / numSerInt)*(IN2FAT / 100);
   in2CarPerSer = (grams2Int / numSerInt)*(IN2CAR / 100);
   in2ProPerSer = (grams2Int / numSerInt)*(IN2PRO / 100);
   in2ChoPerSer = (grams2Int / numSerInt)*(IN2CHO / 100);
   cout << "How many grams of " << IN3NAME << " are you using? ";
   getline(cin, grams3Str);
   istringstream(grams3Str) >> grams3Int;
   if ((grams3Int < 0) || (grams3Int > 1000))
   {
      cout << endl << error2 << endl << endl;
      return 0;
   }
   in3CalPerSer = (grams3Int / numSerInt)*(IN3CAL / 100);
   in3FatPerSer = (grams3Int / numSerInt)*(IN3FAT / 100);
   in3CarPerSer = (grams3Int / numSerInt)*(IN3CAR / 100);
   in3ProPerSer = (grams3Int / numSerInt)*(IN3PRO / 100);
   in3ChoPerSer = (grams3Int / numSerInt)*(IN3CHO / 100);
   cout << "How many grams of " << IN4NAME << " are you using? ";
   getline(cin, grams4Str);
   istringstream(grams4Str) >> grams4Int;
   if ((grams4Int < 0) || (grams4Int > 1000))
   {
      cout << endl << error2 << endl << endl;
      return 0;
   }
   in4CalPerSer = (grams4Int / numSerInt)*(IN4CAL / 100);
   in4FatPerSer = (grams4Int / numSerInt)*(IN4FAT / 100);
   in4CarPerSer = (grams4Int / numSerInt)*(IN4CAR / 100);
   in4ProPerSer = (grams4Int / numSerInt)*(IN4PRO / 100);
   in4ChoPerSer = (grams4Int / numSerInt)*(IN4CHO / 100);
   cout << "How many grams of " << IN5NAME << " are you using? ";
   getline(cin, grams5Str);
   istringstream(grams5Str) >> grams5Int;
   if ((grams5Int < 0) || (grams5Int > 1000))
   {
      cout << endl << error2 << endl << endl;
      return 0;
   }
   in5CalPerSer = (grams5Int / numSerInt)*(IN5CAL / 100);
   in5FatPerSer = (grams5Int / numSerInt)*(IN5FAT / 100);
   in5CarPerSer = (grams5Int / numSerInt)*(IN5CAR / 100);
   in5ProPerSer = (grams5Int / numSerInt)*(IN5PRO / 100);
   in5ChoPerSer = (grams5Int / numSerInt)*(IN5CHO / 100);
   totalCal = in1CalPerSer + in2CalPerSer + in3CalPerSer + in4CalPerSer +
      in5CalPerSer;
   totalFat = in1FatPerSer + in2FatPerSer + in3FatPerSer + in4FatPerSer +
      in5FatPerSer;
   totalCar = in1CarPerSer + in2CarPerSer + in3CarPerSer + in4CarPerSer +
      in5CarPerSer;
   totalPro = in1ProPerSer + in2ProPerSer + in3ProPerSer + in4ProPerSer +
      in5ProPerSer;
   totalCho = in1ChoPerSer + in2ChoPerSer + in3ChoPerSer + in4ChoPerSer +
      in5ChoPerSer;
   cout << "\nTotal calories per serving:  " << totalCal << endl;
   cout << "Total fat per serving:  " << totalFat << endl;
   cout << "Total carbohydrate per serving:  " << totalCar << endl;
   cout << "Total protein per serving:  " << totalPro << endl;
   cout << "Total cholesterol per serving:  " << totalCho << endl << endl;
   return 0;
}
/*---------------------------Output 1 Without Error----------------------------
Lists of Ingredients:
   Ingredient 1:  flour
   Ingredient 2:  egg
   Ingredient 3:  milk
   Ingredient 4:  oil
   Ingredient 5:  sugar

Give this recipe a name:  Pancake

How many people are you serving? 9

How many grams of flour are you using? 789
How many grams of egg are you using? 678
How many grams of milk are you using? 567
How many grams of oil are you using? 456
How many grams of sugar are you using? 345

Total calories per serving:  1051.66
Total fat per serving:  60.26
Total carbohydrate per serving:  108.02
Total protein per serving:  20.34
Total cholesterol per serving:  0.32355

Press any key to continue . . .
-----------------------------------------------------------------------------*/
/*-------------------------Output 2 Without Error------------------------------
Lists of Ingredients:
   Ingredient 1:  flour
   Ingredient 2:  egg
   Ingredient 3:  milk
   Ingredient 4:  oil
   Ingredient 5:  sugar

Give this recipe a name:  Cake

How many people are you serving? 2

How many grams of flour are you using? 500
How many grams of egg are you using? 200
How many grams of milk are you using? 100
How many grams of oil are you using? 50
How many grams of sugar are you using? 50

Total calories per serving:  1403.25
Total fat per serving:  39
Total carbohydrate per serving:  218.5
Total protein per serving:  39.5
Total cholesterol per serving:  0.428

Press any key to continue . . .
-----------------------------------------------------------------------------*/
/*---------------------------Output 3 Without Error----------------------------
Lists of Ingredients:
   Ingredient 1:  flour
   Ingredient 2:  egg
   Ingredient 3:  milk
   Ingredient 4:  oil
   Ingredient 5:  sugar

Give this recipe a name:  Cookies

How many people are you serving? 5

How many grams of flour are you using? 700
How many grams of egg are you using? 300
How many grams of milk are you using? 200
How many grams of oil are you using? 100
How many grams of sugar are you using? 300

Total calories per serving:  1029.8
Total fat per serving:  28.6
Total carbohydrate per serving:  169
Total protein per serving:  23
Total cholesterol per serving:  0.2578

Press any key to continue . . .
-----------------------------------------------------------------------------*/
/*--------------------------Output 4 Without Error-----------------------------
Lists of Ingredients:
   Ingredient 1:  flour
   Ingredient 2:  egg
   Ingredient 3:  milk
   Ingredient 4:  oil
   Ingredient 5:  sugar

Give this recipe a name:  Pizza

How many people are you serving? 10

How many grams of flour are you using? 1000
How many grams of egg are you using? 300
How many grams of milk are you using? 100
How many grams of oil are you using? 400
How many grams of sugar are you using? 100

Total calories per serving:  806.2
Total fat per serving:  44.3
Total carbohydrate per serving:  86.8
Total protein per serving:  14.2
Total cholesterol per serving:  0.1279

Press any key to continue . . .
-----------------------------------------------------------------------------*/
/*---------------------------Output 5 With Error-------------------------------
Lists of Ingredients:
   Ingredient 1:  flour
   Ingredient 2:  egg
   Ingredient 3:  milk
   Ingredient 4:  oil
   Ingredient 5:  sugar

Give this recipe a name:  Croisant

How many people are you serving? 20

Error! Serving between 1 and 10 only.

Press any key to continue . . .
-----------------------------------------------------------------------------*/