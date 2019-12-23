# Unpacking a Sequence into Separate Vaiables

#number of variables and structure must match the sequence,e.g.
p = (4,5)
x,y = p

data = ['ACME',50,91.1,(2012,12,21)]
name,shares,price,date = data
names,shares,price,(year,mon,day)=data

#appliable to all objects that are iterable,e.g. strings
s = 'Hello'
a,b,c,d,e = s

#use _ to discard certain values when unpacking
data = ['ACME',50,91.1,(2012,12,21)]
_,shares,price,_ = data