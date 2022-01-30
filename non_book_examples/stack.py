# Try example Amazon for stack https://pythonist.ru/realizacziya-steka-na-python/

class Stack():

    '''Create stack, add methods pop() push()'''

    def __init__(self) -> None:
        self.stack = []
        self.max = None
   

    def pop(self):
        if len(self.stack) == 0:
            return None
        
        removed = self.stack.pop()

        if len(self.stack) == 0:
             self.max = None
           
        elif removed == self.max:
            self.max = self.stack[0]
            for value in self.stack:
                if value > self.max:
                    self.max = value


        return removed


    def push(self,item):
        self.stack.append(item)

        self.max = item if len(self.stack) == 1 or item > self.max else self.max
        
def main():

    s = Stack()

    print(s.stack)

    s.push(1)
    s.push(2)
    s.push(3)

    print(s.max)
    print(s.stack)

    print(s.pop(),'max',s.max)
    print(s.pop(),'max',s.max)
    print(s.pop(),'max',s.max)
    
if __name__ == '__main__':
    main()