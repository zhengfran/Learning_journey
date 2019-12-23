#Implementing a Priority Queue
import heapq

class PriorityQueue:
    def __init__(self):
        self._queue = []
        self._index = 0

    def push(self, item, priority):
        heapq.heappush(self._queue,(priority,self._index,item))
        self._index +=1

    def pop(self):
        return heapq.heappop(self._queue)[-1]

class Item:
    def __init__(self,name):
        self.name = name
    def __repr__(self):
        return 'Item({!r})'.format(self.name)

if __name__ == "__main__":
    q = PriorityQueue();
    q.push(Item('foo'),1)
    q.push(Item('bar'),5)
    q.push(Item('spam'),4)
    q.push(Item('grok'),1)
    for i in range(4):
        print(q.pop())


#python never bothers to the compare the remaining tuple once the result of comparison can be determined
#OK case: a<b return true, a<c return true
a = (1,0,Item('foo'))
b = (5,1,Item('bar'))
c = (1,2,Item('grok'))

#NG case: a<b return true, a<c error
a = (1,Item('foo'))
b = (5,Item('bar'))
c = (1,Item('grok'))

#NG case: a<b return error
a = Item('foo')
b = Item('bar')