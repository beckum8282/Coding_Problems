text = 'helloWorld'
num = 51230123000
items = [5,2,3,4,3]
z=0
i=0
if items.count(6) != 0:
    for i in range(items.index(3)):
        del items[0]


print(items)

# 계속 for문을 돌려서 0이 나오면 z를 1씩 올리고 다른거 만나면 0으로 초기화해버림j