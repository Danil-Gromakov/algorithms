import time

def selftime(func,*args):
    ''' Estimate selftime for function with one or two args'''

    if len(args) == 1:
        a = args[0]
        start_time = time.time()
        print(f'name:{func.__name__}() arg:{a} -> {func(a)} time: {round((time.time() - start_time),4)} sec.')

    elif len(args) == 2:
        a = args[0]
        b = args[1]

        start_time = time.time()
        print(f'name:{func.__name__}() arg:{a}, {b} -> {func(a,b)} time: {round((time.time() - start_time),4)} sec.')

    else:
        print('Too many args!')
        return 0
