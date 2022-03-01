

# НОД - наибольший общий делитель
# greatest common divisor (GCD) https://en.wikipedia.org/wiki/Greatest_common_divisor

def gcd_0(a:int,b:int) -> int:
    '''https://habr.com/ru/sandbox/60131/'''


    while a!=0 and b!=0:
        if a > b:
            a = a%b
        else:
            b = b%a
    
    c = a+b

    return c
    


def gcd_1(a:int, b:int) -> int:
    '''1. Рекурсия и остатки https://habr.com/ru/post/205106/'''

    if b == 0: return a

    return gcd_1(b,a%b)


def gcd_2(a:int, b:int) -> int:
    '''Те же остатки, но без рекурсии https://habr.com/ru/post/205106/'''

    while b!=0:
        t = b
        b = a%b
        a = t
    return a

def gcd_3(a:int, b:int) -> int:
    '''Классический алгоритм Евклида https://habr.com/ru/post/205106/'''

    while a!=b:
        if a > b:
            a = a-b
        else:
            b = b-a

    return a; 


def main():


    print(gcd_0(100,45),gcd_0.__name__)
    print(gcd_1(100,45),gcd_1.__name__)
    print(gcd_2(100,45),gcd_2.__name__)
    print(gcd_3(100,45),gcd_3.__name__)

if __name__ == '__main__':
    main()