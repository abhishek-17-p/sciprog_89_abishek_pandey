1. Printing Syntax %d for integer, %f for float and \n to start the new line. 

2. trap.c includes c code for computing the area under the curve of f(x),
where f(x) = tan (x). The integral is from x = 0 to x = pi/3 and compare
the value with log(2).

3. The code trap.c contains
i) Set the start point to 0 and the end point to π/3.
ii) Add the function values at the two end points: tan(0) + tan(pi/3).
iii) Loop over the 11 equally spaced points in between (12 strips in total).
iv) Add twice the value of tan at each of these inner points to the sum.
v) Multiply the total by the interval width divided by twice the number of strips.
vi) Print the result alongside log(2) and the difference between them.

4. If we increase the no. of points, it will increase the accuracy. 

5. trap2.c includes c code for computing the area under the same fuction 
but it radians.

6. compiling both codes using gcc trap.c -o out -Wall -lm and gcc trap2.c -o out -Wall -lm
