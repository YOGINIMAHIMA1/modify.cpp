# modify.cppmodify operator is of two types
increment operator- pre/postfix operator
decrement operator-pre/postfix operator
  steps for modify operator
  1>pre increment or pre decrement operator
  2> substitution
  3>evaluation
  4>post fix increment/decrement
  
  
  eg= char a=11;
  float b=22;
  int c=123;
  int d=++a + b--;
  int e=c-- ++a;
  int f=--a/b--;
  
  
Operator

Called

Sample expression

Explanation

++

preincrement

++a

Increment a by 1, then use the new value of a in the expression in which a resides.

++

postincrement

a++

Use the current value of a in the expression in which a resides, then increment a by 1.

--

predecrement

--b

Decrement b by 1, then use the new value of b in the expression in which b resides.

--

postdecrement

b--

Use the current value of b in the expression in which b resides, then decrement b by 1.
