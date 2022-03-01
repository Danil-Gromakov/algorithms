def fromTenToTwodimensionInt(x:int):

    # https://ru.stackoverflow.com/questions/1182927/%D0%9A%D0%B0%D0%BA-%D0%BF%D0%B5%D1%80%D0%B5%D0%B2%D0%B5%D1%81%D1%82%D0%B8-%D0%B4%D0%B5%D1%81%D1%8F%D1%82%D0%B8%D1%87%D0%BD%D0%BE%D0%B5-%D1%87%D0%B8%D1%81%D0%BB%D0%BE-%D0%B2-%D0%B4%D0%B2%D0%BE%D0%B8%D1%87%D0%BD%D0%BE%D0%B5-%D0%BD%D0%B0-python
    # Перевести число из десятичной в двоичную систему 
    #  x % 2 - остаток от деления ( remainder of the division )
    #  x // 2 - целая часть от деления ( integer part of division  )
    #  Чётные ( even ) числа, оканчиваются на 0
    #  Не чётные ( odd ) числа, оканчиваются на 1


    result = []

    while x:
        result.append(x % 2) # отсаток 1 или 0
        x //= 2              # целая часть 
    
    result[::-1]         # перевернуть список 

    print(f'{x} -> {result}')


def strFunc(x:int) -> str:
    ''' 
    Функция str() 
    Ввод: число от -100 до 100
    '''
    def my_abs(x):
        return x*-1 if x < 0 else x # модуль числа

    result = '' if x > 0 else '-' # строка выводв

    m = my_abs(x) # модуль числа

    b = []
    while m:
        b.append(m % 10)
        m = m // 10

    c = [chr(i+48) for i in b][::-1] # Получить строковое значение числа в формате списка и перевернуть список

    for i in c:
        result+=i

    print(x,c,result)

def main():

    fromTenToTwodimensionInt(123)
    strFunc(123)
    strFunc(-123)
    strFunc(-120003)
    strFunc(123124321)


if __name__ == '__main__':
    main()