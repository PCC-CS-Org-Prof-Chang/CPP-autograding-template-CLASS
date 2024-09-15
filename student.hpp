#pragma once // prevents multiple definitions

#include <iostream> // print library
#include "./AbstractDataType/calculator.h" // reference implementations

// Exercise 1: implements function 'add', that adds two numbers
int add(int a, int b);

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b);

// ===============
// implementations

int add(int a, int b)
{
   
   Calculator calc; // remove the 'new' keyword
   return calc.add(a, b);
   
  //return 0;
}

// Exercise 2: implements function 'mul', that multiplies two numbers
int mul(int a, int b)
{
   
   Calculator calc;
   return calc.mul(a,b); // TODO: fix
   
  //return 0;
}