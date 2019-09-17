# Backtracking
Problems on Backtracking <br>
<strong> Question 1 Frog jumping </strong><br>

The latest hit on TV is a jumping game played on a giant rectangular chessboard. Each
participant dresses up in a green frog suit and starts at the top left corner of the board. On
every square there is a spring-loaded launcher that can propel the person either to the right
or down.<br>
Each launcher has two quantities R and D associated with it. The launcher can propel
the person upto R squares to the right and upto D squares down. The participant can set
the direction of the launcher to Right or Down and set the number of squares to jump to
any number between 1 and R squares when jumping right, or between 1 and D squares when
jumping down. The winner is the one who can reach bottom right corner of the chessboard
in the smallest number of jumps.<br>
For instance, suppose you have 3 × 4 chessboard as follows. In each square, the pair of
numbers indicates the quantities (R, D) for the launcher on that square.<br>
(1,2)(1,2)(1,2)(2,1)<br>
(3,1)(1,1)(1,2)(1,2)<br>
(1,1)(1,1)(1,2)(2,2)<br>
<br>
Here, one way to reach the bottom right corner is to first jump 1 square right, then jump
2 squares down to the bottom row, then jump right two times, one square a time, for a total
of 4 jumps. Another way is to first jump 1 square down, then jump 3 squares right to the
last column and finally jump one square down to the bottom right corner, for a total of 3
jumps. On this board, it is not possible to reach the bottom right corner in fewer than 3
jumps.<br>
Your task is to write a program to calculate the smallest number of jumps needed to go
from the top left corner to the bottom right corner, given the layout of the launchers on the
board.<br>
Input format<br>
The first line of the input contains two positive integers M and N, giving the dimensions of
the chessboard. M is the number of rows of the board and N is the number of columns. This
is followed by 2M lines of input: M lines describing the R values of the launchers followed
by M lines describing the D values of the launchers. Line 1+i, 1 ≤ i ≤ M, has N integers,
describing the R values for row i. Line M+1+i, 1 ≤ i ≤ M, has N integers, describing the
D values for row i.<br>
Output format<br>
The output should be a single integer, the minimum number of jumps required to reach the
bottom right square from the top left square on the given chessboard.<br>
Test data<br>
You may assume that 1 ≤ M ≤ 250 and 1 ≤ N ≤ 250.
Example<br>
Here is the sample input and output corresponding to the example discussed above.
Sample input<br>
3 4<br>
1 1 1 2<br>
3 1 1 1<br>
1 1 1 2<br>
2 2 2 1<br>
1 1 2 2<br>
1 1 2 2<br>
<br>
Sample output<br>
3<br>
Note: Your program should not print anything other than what is specified in the output
format. Please remove all diagnostic print statements before making your final submission.
A program with extraneous output will be treated as incorrect!
<br>