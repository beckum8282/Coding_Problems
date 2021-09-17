# Sympy를 불러보자 맨이야
import sympy as sym

# 참고로 diff()가 미분을 하는 메소드란다!
x = sym.Symbol('x')
num = input("도함수를 구해주마: ")
print(sym.diff(num,x))