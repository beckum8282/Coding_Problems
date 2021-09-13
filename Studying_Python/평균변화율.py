from sympy import symbols

# 평균 변화율 구하는 함수 정의
def average(a,b):
    m = max(a,b) # a,b 최댓값
    n = min(a,b) # a,b 최솟값
    x = symbols('x')
    
    fx = 2*x**2+4*x+7
    fb = fx.subs(x,m)
    fa = fx.subs(x,n)

    result = (fb - fa)/(m-n)

    return result
print(average(0,2))