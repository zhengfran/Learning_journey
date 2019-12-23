#Make a dictionary that maps key to more than one value('multidict')
'''
#use lists to preserve insertion order of items
d = {
    'a':[1,2,3],
    'b':[4,5]
}
#use sets to elminate duplicates
e = {
    'a':{1,2,3},
    'b':{4,5}
}
'''
from collections import defaultdict
d = defaultdict(list)
d['a'].append(1)
d['a'].append(2)
d['a'].append(4)

d =defaultdict(set)
d['a'].add(1)
d['a'].add(2)
d['a'].add(4)

#Consider use a defaultdict for cleaner code
# own initialization
d ={}
for key, value in pairs:
    if key not in d:
        d[key]=[]
    d[key].append(value)

#Use defaultdict
d = defaultdict(list)
for key, value in pairs:
    d[key].append(value)