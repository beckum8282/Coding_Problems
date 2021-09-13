from sympy import Derivative, symbols

# 미분계수
x = symbols('x')
fx = 2 * x ** 2 + 4 * x + 7

fprime = Derivative(fx,x).doit()
n = fprime.subs({x:3})
print("f(x)에서 x = 3 에서의 미분계수는",n,"이란다!")
