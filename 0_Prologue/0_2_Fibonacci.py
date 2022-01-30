
import sys
sys.path.append('../')

from help import selftime 

# Вычисление чисел Фибоначчи
# Каждый член равен сумме двух предыдущих.
# F(n) = F(n-1) + F(n-2), n > 1; 1, n=1; 0, n=0;

# Факториал числа — это число, умноженное на каждое предыдущее число вплоть до 1.

def Fib1(n):
    '''An exponential algorithm'''

    if n == 0 : return 0
    if n == 1 : return 1
    
    return Fib1(n-1)+Fib1(n-2)


def Fib2(n):
    '''A polynomial algorithm'''


    if n == 0: return 0

    l = list(range(0,n+1))

    for i in range(2,n+1):
        l[i] = l[i-1]+l[i-2]
    
    return l[n]

    # 1. Is it correct?
    # 2. How much time does it take, as a function of n?
    # 3. And can we do better?


def main(N:int) -> None:

    selftime(Fib1,N)
    selftime(Fib2,N)

    selftime(Fib1,1,2,3)


if __name__ == '__main__':
        
    main(31)