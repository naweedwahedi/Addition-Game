
//Naweed_Wahedi
//Hwrk03_B
//This program will calculate two random numbers.

#include <iostream>
#include <iomanip>
#include <ctime>    //to generate seed
#include <cstdlib>  //to generate random number

using namespace std;

int main()
{
    //declare variables
    int num1, num2;

    //get seed
    unsigned seed = time(0);

    //seed random number generator
    srand(seed);

    //generate random number in range 1 to 1000
    num1 = (rand() % (1000 - 1 + 1)) + 1;
    num2 = (rand() % (1000 - 1 + 1)) + 1;

    cout <<"Naweed Wahedi Math Tutor"<<endl;

    //display calculation
    cout <<endl;
    cout <<endl;
    cout << setw(5) << num1 << endl;
    cout << "+" << setw(4) << num2 << endl;
    cout << " _____" << endl;
    cout <<endl;
    cout <<endl;
    cout << "Press [Enter] when ready to see the correct answer..."<<endl;

    //wait for user to hit enter
    cin.get();

    //Display the result.
    cout << setw(5) << num1 << endl;
    cout << "+" << setw(4) << num2 << endl;
    cout << " _____" << endl;
    cout << setw(5) << num1 + num2<<endl;
    cout << endl;
    return 0;
}
