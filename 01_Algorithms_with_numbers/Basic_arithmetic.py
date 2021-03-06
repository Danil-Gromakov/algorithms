import sys
sys.path.append('../')

from help import selftime 

# def MultiplyOne(x:int,y:int) -> int:
#     '''
#     Input: Two n-bit integers x and y, where y ≥ 0
#     Output: Their product
#     '''

#     if y == 0: return 0
#     z = MultiplyOne(x,abs(y))
  
#     if abs(y) % 2 == 0: # -> even 
#         return z
#     else:
#         return x + z  
 
def MultiplyTwo(x:int,y:int) -> int:

    if y == 0 :return 0
    z = MultiplyTwo(x,y-1)
    return z+x

def Divide(x:int,y:int) -> int:


    if x == 0: return 0,0

    q,r = Divide(x//2,y)

    q = 2*q
    r = 2*r

    if x & 1: # -> even (чётный) 
        r = r+1
    elif r >= y:
         r = r-y
         q = q+1

    return q,r


def main():


    # selftime(MultiplyOne,2,3)
    selftime(MultiplyTwo,2,3)
    selftime(Divide,64,2)
    
    

if __name__ == '__main__':
    
    main()