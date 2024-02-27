In this Blog We are going through the following:
1:Which language I used tow write this? 
2:About Problem.
3:Solution and Explanation. 
4:Conclusion.
Which language I used in this program?
In this blog, I'm using C language to write a program.
I choose C language because it is very effective and closer to computer memeory.
This computer langauge help me to solve simple and critical problems in an easy way.That's why is used this language as my first programming Language. So let's go to the problam and solve it.🥰

About Problem
This problem is about to take 2  numbers from the user (number will be any type. i.e integer, floating point ).To use that numbers perform an operation that is decide by the user. The operation is Arithmetic Operation.The operator is checked before it perofm on the data using switch statement.

Arithmatic Operators:

There are total five Arithmatic Operators. In this operation, we can perform some methimatical operation on the data give by the user
Addition +
Substraction -
Division /
Multiplication  *
Modulas  %

Switch Statement
It is the type of selection statement, that is used when there are many choices and only one should be executed.It takes only inteager and character data type value.
It execute one case if that case is match with the use input.
We will talk about their details in other blog, for now lets move to the solution.

Solution and Explanation
I divided this problem into Three Steps.

Declaration
Input from the user
Apply Swicth Statement
I write this progrm in C language, you can write in any language in which you find Structure like Switch Statement.

Declaration Process

First of all, I declare two variables in which the value of user will store.The name of valraible could be any thats upon your thinking.I give inetger (int) data type to both variables.
I asign them name is num1 and num2 and the data type is int.

Then to store arithmatic operator enterd by the user, I used Character Data Type (char) for it.
Declaration process is completed.😍 WOW.

Input from the user
For input from the user, I use two funtions.
1:printf
2:scanf
Printf is used to tell the user to enter correct input
scanf is used to take the value from the user.
I write this input code in the following way.

Input three values
Our last step is, use switch statement and apply functionality to the program.
Overview of Switch Statement
I write switch keyword and within their brackets, I write operator variable. The switch keyword take the value that is store in the variable, in case of operator variable and compare that value with each case.
If any case will match with the input value(operator) the statements below that case will executed.
The body of switch is must be enclosed within curly braces {}. Each Case must contain break; keyword

Now, lets move to the solution very quikly.
After write variable name within the switch keyword, open the curly braces and write:
For addition:
case '+':
        Printf("Result is :%d",num1+num2) ; 
        break;
For Substraction:
case '-':
        Printf("Result is :%d",num1- num2) ; 
        break;
For Multiplication:
case '*':
        Printf("Result is :%d",num1* num2) ; 
        break;
For Division:
case '/':
        Printf("Result is :%d",num1/num2) ; 
        break;
For Modulos:
case '%':
        Printf("Result is :%d",num1- num2) ; 
        break;
Note:In this situation, if no case is match with the given cases, then the default case is executed automaticaly.It is optional in the program.
default:
        printf("Invalid Input, Try Again");
So this is how, we solve our problem in step by step and the following picture is the complete code of the problem. I give you the link of my Github Repo , so you can copy that code easily.😍

Thanks a lot for your pricious time. ❤❤
Code to copy Link:[ Directory Link click one me]











