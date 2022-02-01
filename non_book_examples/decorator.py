def decorator(func):

    def txt2Upper(txt:str) -> None:
        print(txt.upper())
        

    def wrapper():

        txt = func()

        txt2Upper(txt)


    return wrapper

@decorator
def hello():
    return "hello world"

def main():

    hello()



if __name__ == '__main__':

    main()