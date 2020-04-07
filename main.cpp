#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int
 char
 bool
 float
 double
 void

 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    int age = 8;
    int siblings = 2;
    int fingers = 10;

    bool isNegative = 0;
    bool eyesClosed = 1;
    bool on = 0;

    char menInBlackAgent = 'K';
    char spaghettiShape = 'S';
    char grade = 'A';

    float temperature = 10.2f;
    float decibels =  -2.92f;
    float wage = 20.20f;
    
    double pi = 3.14159265;
    double gravity = 9.812871029;
    double speedOfSound = 340.118983726;
    
    ignoreUnused(number, age, siblings, fingers, isNegative, eyesClosed, on, menInBlackAgent, spaghettiShape, grade, temperature, decibels, wage, pi, gravity, speedOfSound); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void payRent(int amount)
{
    ignoreUnused(amount);
}
/*
 2)
 */
void makeCoffee(char size = 'm', int strength = 2)
{
    ignoreUnused(size, strength);
}
/*
 3)
 */
bool canIAfford(int cost, float tax, float bankBalance = 100.98f)
{
    ignoreUnused(cost, tax, bankBalance);
    return {};
}
/*
 4)
 */
double findCoordinates(int postcode, int houseNumber = 289)
{
    ignoreUnused(postcode, houseNumber);
    return {};
}
/*
 5)
 */
void tieLaces (int shoe = 1, int hand = 0)
{
    ignoreUnused(shoe, hand);
}

/*
 6)
 */
void openDoor(int doorNumber, int key, int handleType)
{
    ignoreUnused(doorNumber, key, handleType);
}
/*
 7)
 */
void takeSelfie(int cameraPosition, int facialExpression, int filterType, int socialMediaPost)
{
    ignoreUnused(cameraPosition, facialExpression, filterType, socialMediaPost);
   
}
/*
 8)
 */
int numberOfBrothers(int siblings, int sisters)
{
    ignoreUnused(siblings, sisters);
    return {};
}
/*
 9)
 */
char getKeySignature(char noteUsed, int reg, float beatPosition)
{
    ignoreUnused(noteUsed, reg, beatPosition);
    return {};
}

/*
 10)
 */

void bakeCake(int noEggs = 2, float flourWeight = 100.1f, int sugarGranuals = 1000)
{
    ignoreUnused(noEggs, flourWeight, sugarGranuals);
    
}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    payRent(500);
    //2)
    makeCoffee('L', 1);
    //3)
    auto expense = canIAfford(100, 10, 300);
    //4)
    auto location = findCoordinates(453, 10);

    //5)
    tieLaces(0, 1); 
    //6)
    openDoor(21, 4, 0);
    //7)
    takeSelfie(1, 3, 0, 9);

    //8)
    auto brothers = numberOfBrothers(3, 1);
    //9)
    auto key = getKeySignature('c', -2, 1.5);
    //10)
    bakeCake(4, 50.6f, 20000);
    
    ignoreUnused(carRented, expense, location, brothers, key);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
