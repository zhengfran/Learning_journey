#Create a dictionary , control the order of items when iterating or serializing

#Use OrderedDict
from collections import OrderedDict
import json

d = OrderedDict()
d['foo']=1
d['bar']=2
d['spam']=3
d['grok']=4

for ket in d:
    print(ket, d[ket])

print(json.dumps(d))
#ordered dictionary is particularly useful when you want to build a mapping that later serialize or encode into a different
#format
'''
import json
json.dumps(d)
'''

#Internally OederedDict is implemented by a doubly linked list, thus morethan double the memory a normal list needs