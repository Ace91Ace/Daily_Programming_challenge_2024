class Stack:  
    def __init__(self):  
        self.items = []  

    def is_empty(self):  
        return len(self.items) == 0  

    def push(self, item):  
        self.items.append(item)  

    def pop(self):  
        return self.items.pop() if not self.is_empty() else None  

    def peek(self):  
        return self.items[-1] if not self.is_empty() else None  

    def __repr__(self):  
        return repr(self.items)  


def sort_stack(stack):  
    if not stack.is_empty():  
        top = stack.pop()  
        sort_stack(stack)  
        sorted_insert(stack, top)  


def sorted_insert(stack, element):  
    if stack.is_empty() or element > stack.peek():  
        stack.push(element)  
    else:  
        top = stack.pop()  
        sorted_insert(stack, element)  
        stack.push(top)
