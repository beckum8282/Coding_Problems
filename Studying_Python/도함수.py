from sympy import Derivative, symbols


x = symbols('x')
fx = 2*x**2-1

print(Derivative(fx,x).doit())
