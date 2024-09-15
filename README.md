# autograding-example-cpp-catch

**IMPORTANT:** If autograding (GitHub Actions) doesn't start for you, *check again the Invitation Link for
the activity* and hit the link named **update**.

If you want to practice this activity, just follow this link: https://classroom.github.com/a/X_8PAk4h

## Full-Name-Of-Student

**TODO - Please put your name in this README**

## Problem Description

This part describes the activity. This example activity consists in fixing two functions: one that adds two integers, and another that multiplies two integers.

## Objective

- Make the code pass correctly on all tests
   * only change the allowed files to achieve this goal (see instructions below with specific rules).

- The GitHub Actions should present a green marker when all tests are satisfied, and a red X when some (or all) of tests fail. 
    * **Advice:** You can click on the red X to verify which tests have failed (or if code didn't compile correctly).
    * **Advice 2:** If no autograding test appear, it may be required for the **instructor** to *update the test activities*, so that all student repos are refreshed (regarding autograding).

## Instructions

- You can ONLY change files `student.hpp` and `README.md`!
   * In file `student.hpp` put your implementations, and in `README.md` put your full name.

Explanations for the other files:

- file `tests.cpp` has all tests for the activity (DO NOT CHANGE!)
- file `catch.hpp` has the testing library  CATCH2 (DO NOT CHANGE!)
- file `makefile` has the commands for executing activity (DO NOT CHANGE!)
- file  `appTests` will be generated after compiling (if you want to test locally, just execute it)

## Commands for Local Testing

- Command to build and execute tests: `make test`
    * If executable is built already, just type: `./appTests`

## Notes

- The code will be evaluated only if compiling! 
   * The reason is, if it doesn't compile, it won't be possible to generate the executable and to perform tests.

- Some test cases may receive individual grade, while others may only receive grade if passing together (or even all tests passing together).

- The final grade will be given automatically on every *commit*, and will only be evaluated until the deadline of the activity.

- The deadline is defined in GitHub Classroom
   * in case you cannot find it, ask the instructor or the course webpage

Check all other rules with instructor.

Reference:

*Learning Autograding with C/C++ and Catch2 - Prof. Igor Machado Coelho*
https://medium.com/swlh/easy-c-autograding-on-github-classroom-with-catch2-106ad1107402#id_token=eyJhbGciOiJSUzI1NiIsImtpZCI6ImIyZjgwYzYzNDYwMGVkMTMwNzIxMDFhOGI0MjIwNDQzNDMzZGIyODIiLCJ0eXAiOiJKV1QifQ.eyJpc3MiOiJodHRwczovL2FjY291bnRzLmdvb2dsZS5jb20iLCJhenAiOiIyMTYyOTYwMzU4MzQtazFrNnFlMDYwczJ0cDJhMmphbTRsamRjbXMwMHN0dGcuYXBwcy5nb29nbGV1c2VyY29udGVudC5jb20iLCJhdWQiOiIyMTYyOTYwMzU4MzQtazFrNnFlMDYwczJ0cDJhMmphbTRsamRjbXMwMHN0dGcuYXBwcy5nb29nbGV1c2VyY29udGVudC5jb20iLCJzdWIiOiIxMDU1NzI0OTEwNTk4NzY5NzU2MjUiLCJlbWFpbCI6ImNoYW5na2VuQGdtYWlsLmNvbSIsImVtYWlsX3ZlcmlmaWVkIjp0cnVlLCJuYmYiOjE3MjU3NDIzNTUsIm5hbWUiOiJLZW4gQ2hhbmciLCJwaWN0dXJlIjoiaHR0cHM6Ly9saDMuZ29vZ2xldXNlcmNvbnRlbnQuY29tL2EvQUNnOG9jSWg3QWV2dWc1bXNrWGRIc0FmVjllYnY5SkRoNnplS1hmbTR2alE5aUNGX29kUDI2YW09czk2LWMiLCJnaXZlbl9uYW1lIjoiS2VuIiwiZmFtaWx5X25hbWUiOiJDaGFuZyIsImlhdCI6MTcyNTc0MjY1NSwiZXhwIjoxNzI1NzQ2MjU1LCJqdGkiOiJlYjRhYjFmNDg3MWMzMTY5ODIwYTc4ZTExNDExZjk5YmQyYTMwYzBkIn0.X1JO29bu9lhGEJd36RaA9I6NaeSzlBtNPTjK8xKz6pLPgTBNv76uIk3RlEVa7NVjJb9v62wwX_mvgxDOLJgO8xWi6ygs5VckVJXKpCCwS_x92-jOogLEemgdT-bG-N07yzOXxwqcob8vfy4L6ucMWc8qPBIUvH0JMGS8g1aXXhshLj4p2UpZ5_uIz7mcYhM_SARRt93oVGxaf7CaiFwnJW1-g_Bp9HKVpEeqkAxJBHElo4x1Vtk7Pg6PpwcfyfXJsXcnYG4iZJKBNqKYc6NzY8VwHL2sTCpaZvHGp4IC2nNnBJr6xgKbIJHRPddjKmvVW0lBfpr1-VF6LqxQDT9QvQ

## License

MIT License 2020
