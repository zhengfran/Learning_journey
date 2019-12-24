#Find Commonalities in two dictionaries

a = {
    'x':1,
    'y':2,
    'z':4
}

b= {
    'w':10,
    'x':11,
    'y':2
}

#Keys in common
a.keys() & b.keys()
#Keys in a that are not in b
a.keys() - b.keys()
#(key,value) pairs in common
a.items() & b.items()

#Make a new dic with certain keys removed
c = {key:a[key] for key in a.keys() - {'z','w'}}