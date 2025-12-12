# Calculating Euler number using exp(x) series evaluated at x = 1

## Description
This program calculates the value of Euler's number (e) using the taylor/Maclaurian series expansion of the exponential function evaluated at x = 1.

## Physics / Mathematical Background
The series expansion of exp(x) is:

e^x = ε (x^n / n!) from n = 0 to n = ∞

By truncating the sum after N terms, we obtain an approximation of e. 

## What the code does
- Takes an integer N as input. 
- Computes factorial values iteratively.
- Adds the series terms 1 / n! up to N (input by the user).
- Prints the approximate value of e.

## Files Included
- 'euler_series.cpp' - C++ implementation of the series expansion.

## Additional Resources
- [Taylor Series - Essense of Calculus series](https://youtu.be/3d6DsjIBzJ4?si=1jTDBpw73NaKzP5M)
- [What's so special about euler's number e - Essense of Calculus series](https://youtu.be/m2MIpDrF7Es?si=FWPQt-SB6EjMPRH-)

These YouTube videos are from the channel 3Blue1Brown.