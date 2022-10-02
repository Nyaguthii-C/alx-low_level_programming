## 0x0A. C - argc, argv

- 0-whatsmyname.c - prints its name, followed by a new line

- 1-args.c - prints the number of arguments passed into it

- 2-args.c - prints all arguments it receives

- 3-mul.c - multiplies two numbers
	- Assume that the two numbers and result of the multiplication can be stored in an integer
	- If program does not receive two arguments, print Error, followed by a new line, and return 1

- 4-add.c - adds positive numbers
	- If no number is passed to the program, print 0, followed by a new line
	- If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
	- assume that numbers and the addition of all the numbers can be stored in an int

- 100-change.c - prints the minimum number of coins to make change for an amount of money
	- Usage: ./change cents
	- here cents is the amount of cents you need to give back
	- f the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
	- should use atoi to parse the parameter passed to your program
	- If the number passed as the argument is negative, print 0, followed by a new line
	- can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
