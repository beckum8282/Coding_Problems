from sympy import expand,factor,Symbol
import math

x= Symbol('x')
y = Symbol('y')

#print(expand((x+1)*(x+5)))
print(factor(x**3*y-x*y**3))