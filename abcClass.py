# Реализация Абстрактные базовые классы (ABCMeta)

# https://www.codecamp.ru/blog/python-abstract-base-classes-abc/
# https://docs.python.org/3/library/abc.html


# class Fruit:

#     def check(self):
#         raise NotImplementedError("'check()' method not implemented!")

# class Apple(Fruit):
#     pass

# a = Apple()
# a.check()


# from abc import ABCMeta, abstractmethod

# class AbstractClass(object):

#     __metaclass__ = ABCMeta

#     # декоратор abstractmethod регистрирует этот метод как undefined
#     @abstractmethod 
#     def virtual_method_subclasses_must_define(self):
#        # Можно оставить полностью пустым
#        # или предоставить базовую реализацию
#        # Обратите внимание, что обычно пустая интерпретация
#        # неявно возвращает `None`, но при регистрации
#        # это поведение больше не применяется.
#        return

# class SubclassA(AbstractClass):

#     def virtual_method_subclasses_must_define(self):
#         print('Subclass boy A')
#         return
        

# class SubclassB(AbstractClass):

#     def virtual_method_subclasses_must_define(self):
#         print('Subclass boy B')
#         return
      
# A = SubclassA()
# B = SubclassB()

# A.virtual_method_subclasses_must_define()

# B.virtual_method_subclasses_must_define()

from abc import ABCMeta, abstractmethod

class MontyPython(metaclass=ABCMeta):

    # __metaclass__ = ABCMeta

    # @abstractmethod
    def joke(self):
        return 'meta'

    # @abstractmethod
    def punchline(self):
        pass

class ArgumentClinic(MontyPython):
    
    def joke(self):
        return 'joke Hahahahahahahahahaha'

    # def punchline(self):
    #     return 'punchline Hahahahahahahahahaha'


sketch = ArgumentClinic()
print(sketch.punchline())
print(sketch.joke())
