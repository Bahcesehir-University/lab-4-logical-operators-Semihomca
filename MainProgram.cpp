// ============================================================================
//  LAB: Relational & Logical Operators, Conditional Statements
//  Course: CMP1001 – Introduction to Programming (C++)
//  Duration: 60 minutes
//  
//  Description:
//    In this lab you will practice using relational operators (==, !=, <, >,
//    <=, >=), logical operators (&&, ||, !), and conditional statements
//    (if, else if, else, nested ifs). By the end you should be comfortable
//    combining these tools to make decisions in your programs.
//
//  Instructions:
//    1. Read every comment carefully before writing code.
//    2. Look for "// TODO:" markers — that is where YOU write code.
//    3. Compile often:  g++ MainProgram.cpp -o lab && ./lab
//    4. Test each section before moving on.
//    5. Do NOT delete any provided code or comments.
//
//  Reminder: Everything is in ONE file. Do NOT create header files.
// ============================================================================

#include <iostream>
using namespace std;

// ============================================================================
//  SECTION 1 — WARM-UP  (5–10 minutes)
//  Goal: Refresh your memory on cin, cout, variables, and simple arithmetic.
// ============================================================================

void section1_warmup() {
    cout << "=== SECTION 1: WARM-UP ===" << endl;

    // -----------------------------------------------------------------------
    // Exercise 1.1
    // Declare two integer variables, ask the user to enter values for both,
    // then print their sum.
    // -----------------------------------------------------------------------

    // TODO: Declare two int variables (a and b)

    // TODO: Prompt the user and read both values with cin
int a , b;
    // TODO: Print "Sum = " followed by the result

    cout << "Enter two integers:";
    
    cin >>a >> b;
    
    cout << "sum is "<< a + b << endl;

    // -----------------------------------------------------------------------
    // Exercise 1.2
    // Ask the user for a temperature in Celsius.
    // Convert it to Fahrenheit using:  F = C * 9/5 + 32
    // Print the result.
    // -----------------------------------------------------------------------

    // TODO: Declare a double variable for Celsius
double celsius;
    // TODO: Prompt and read the value
cout << "Enter temperature in celcius";
    // TODO: Calculate Fahrenheit and print it
cin >> celsius;
double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
cout << celsius <<" C = " << fahrenheit << " F " << endl;
    cout << endl;
}

// ============================================================================
//  SECTION 2 — CORE CONCEPTS  (10–15 minutes)
//  Topic: Relational operators, logical operators, and if/else basics.
// ============================================================================

void section2_coreConcepts() {
    cout << "=== SECTION 2: CORE CONCEPTS ===" << endl;

    // --- Mini-Reference (read these, do NOT delete) ------------------------
    //
    //  Relational operators compare two values and return true or false:
    //    ==  equal to          !=  not equal to
    //    <   less than         >   greater than
    //    <=  less or equal     >=  greater or equal
    //
    //  Logical operators combine boolean expressions:
    //    &&  AND  — true when BOTH sides are true
    //    ||  OR   — true when AT LEAST ONE side is true
    //    !   NOT  — flips true ↔ false
    //
    //  Conditional statement pattern:
    //    if (condition) {
    //        // runs when condition is true
    //    } else if (anotherCondition) {
    //        // runs when the first is false and this one is true
    //    } else {
    //        // runs when none of the above are true
    //    }
    // -----------------------------------------------------------------------

    // --- Example (study this) ----------------------------------------------
    int age = 20;
    if (age >= 18) {
        cout << "Example: You are an adult." << endl;
    } else {
        cout << "Example: You are a minor." << endl;
    }
    // -----------------------------------------------------------------------

    // --- Example with logical operator (study this) ------------------------
    bool hasID = true;
    if (age >= 18 && hasID) {
        cout << "Example: Access granted." << endl;
    } else {
        cout << "Example: Access denied." << endl;
    }
    cout << endl;
    // -----------------------------------------------------------------------

    // -----------------------------------------------------------------------
    // Exercise 2.1
    // Ask the user for an integer. Print whether it is positive, negative,
    // or zero using if / else if / else.
    // -----------------------------------------------------------------------

    // TODO: Declare an int variable

    // TODO: Prompt and read it
int num;
    // TODO: Use if / else if / else to print the correct message

    cout << "Enter an integer:" << endl;
cin >> num;
if (num > 0){
cout << num << "is positive";}

else if (num<0){
    cout <<num << "is negative";
}
else {
    cout << num <<"is 0";
}
    // -----------------------------------------------------------------------
    // Exercise 2.2
    // Ask the user for two integers. Using ONLY relational operators and
    // cout, print:
    //   "Equal"        if they are the same
    //   "First is bigger"  if the first is larger
    //   "Second is bigger" otherwise
    // -----------------------------------------------------------------------
int x , y ;
cout <<  "enter two integers";
cin>> x >> y ;

if (x == y){
    cout << "Equal" << endl;
} else if (x>y){
    cout << "First is larger" << endl;
} else{
    cout << "Second is larger" << endl;
}
    // TODO: Declare two ints, prompt, and read them

    // TODO: Write the if / else if / else chain

    cout << endl;
}

// ============================================================================
//  SECTION 3 — GUIDED EXERCISES  (25–30 minutes)
//  These get progressively harder. Take your time.
// ============================================================================

void section3_guidedExercises() {
    cout << "=== SECTION 3: GUIDED EXERCISES ===" << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.1 — Even or Odd
    // Ask the user for an integer. Print whether it is even or odd.
    // Hint: use the modulus operator (%).
    //   number % 2 == 0  means even.
    // -----------------------------------------------------------------------
int num ;
cout << "enter an integer";
cin >> num;
if (num %2 == 0){
    cout << num << "is even" << endl;
}else{
    cout << num << "is odd" << endl;
}

    // TODO: Implement the even/odd checker

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.2 — Simple Grade Calculator
    // Ask the user for a numeric score (0–100).
    // Print the letter grade using this scale:
    //   90–100 → A
    //   80–89  → B
    //   70–79  → C
    //   60–69  → D
    //   below 60 → F
    //
    // Also print "Invalid score" if the input is < 0 or > 100.
    // -----------------------------------------------------------------------
int x ;
cout <<"enter a number";
cin >> num;
if (num <0 || num >100){
    cout << "Invalid Score";
}else if (num >=90){
    cout << "grade A";
}
else if (num >=80){
    cout << "grade B";
}
else if (num >=70){
    cout << "grade C";
}
else if (num >=60){
    cout << "grade D";
}
else if (num >=0){
    cout << "grade F";
}

    // TODO: Implement the grade calculator

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.3 — Leap Year Checker
    // Ask the user for a year (int).
    // A year is a leap year if:
    //   (divisible by 4 AND not divisible by 100)
    //   OR divisible by 400
    //
    // Print whether it is a leap year or not.
    // Hint: you will need both && and || in one condition.
    // -----------------------------------------------------------------------
int year ;
cout <<"enter a yearr";
cin >> year;
if ((year %4 == 0 && year %100 != 0) || (year % 400 ==0)){
    cout << year << "is leap year" << endl;
}else{
    cout << year << "is not a leap year" <<endl;
}
    // TODO: Implement the leap year checker

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.4 — Triangle Validator
    // Ask the user for three side lengths (doubles).
    // A valid triangle must satisfy ALL of:
    //   side1 + side2 > side3
    //   side1 + side3 > side2
    //   side2 + side3 > side1
    //
    // If valid, additionally classify it:
    //   - Equilateral (all sides equal)
    //   - Isosceles   (exactly two sides equal)
    //   - Scalene     (no sides equal)
    //
    // Hint: use nested if statements.
    // -----------------------------------------------------------------------

    // TODO: Implement the triangle validator and classifier
double s1 , s2 , s3;
cout << "enter three sight lenghts:"<< endl;
cin >> s1 >> s1 >> s3;
if (s1+ s2 > s3 && s1 + s3 > s2&& s2 ==)

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.5 — Ticket Price Calculator
    // A cinema charges different prices:
    //   - Children (age < 12):       $5
    //   - Students (age 12–24):      $8
    //   - Adults  (age 25–64):       $12
    //   - Seniors (age >= 65):       $7
    //
    // Additional rules:
    //   - If it is a weekday (user enters 'W') everyone gets $2 off.
    //   - If it is a weekend (user enters 'E') no discount.
    //
    // Ask for the customer's age and day type ('W' or 'E').
    // Print the final ticket price.
    // Hint: calculate base price first, then apply discount.
    // -----------------------------------------------------------------------

    // TODO: Implement the ticket price calculator

    cout << endl;
}

// ============================================================================
//  SECTION 4 — CHALLENGE  (10 minutes)
//  Push yourself! These are a bit harder and more open-ended.
// ============================================================================

void section4_challenge() {
    cout << "=== SECTION 4: CHALLENGE ===" << endl;

    // -----------------------------------------------------------------------
    // Challenge 4.1 — Mini Login System
    //
    // Simulate a simple login:
    //   - The correct username is "admin" and the correct PIN is 1234.
    //   - Ask the user to enter a username (string) and a PIN (int).
    //   - If BOTH match → print "Login successful!"
    //   - If the username is wrong → print "Unknown user."
    //   - If the username is right but PIN is wrong →
    //       print "Incorrect PIN."
    //
    // Think carefully about the ORDER of your checks.
    // -----------------------------------------------------------------------

    // TODO: Implement the mini login system

    cout << endl;

    // -----------------------------------------------------------------------
    // Challenge 4.2 — Body Mass Index (BMI) Advisor
    //
    // Ask the user for their weight in kg and height in meters.
    // Calculate BMI = weight / (height * height)
    //
    // Print the BMI value AND the category:
    //   BMI < 18.5          → Underweight
    //   18.5 <= BMI < 25.0  → Normal weight
    //   25.0 <= BMI < 30.0  → Overweight
    //   BMI >= 30.0         → Obese
    //
    // Also handle invalid input:
    //   - weight <= 0 or height <= 0 → print "Invalid input"
    // -----------------------------------------------------------------------

    // TODO: Implement the BMI advisor

    cout << endl;
}

// ============================================================================
//  MAIN — calls each section in order
// ============================================================================

int main() {
    cout << "============================================" << endl;
    cout << "  CMP1001 Lab: Relational & Logical Ops    " << endl;
    cout << "  Conditional Statements                   " << endl;
    cout << "============================================" << endl << endl;

    section1_warmup();
    section2_coreConcepts();
    section3_guidedExercises();
    section4_challenge();

    cout << "============================================" << endl;
    cout << "  Lab complete. Don't forget to submit!    " << endl;
    cout << "============================================" << endl;

    return 0;
}
