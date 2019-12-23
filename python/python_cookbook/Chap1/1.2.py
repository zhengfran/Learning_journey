# Unpacking N elements from an iterable, but its length is larger than N

# use "star expressions"
def drop_first_last(grades):
    first,*middle,last = grades
    return avg(middle)

#another axample
record - ('dave','dave@example.com','773-555-1212','875-256-9876')
name,email,*phone_numbers = user_record

#starred variable can also be the first on the list
def compare_current_vs_average(sales_record):
    *trailing_qtrs, current_qtr = sales_record
    trailing_avg = sum(trailing_qtrs) / len(trailing_qtrs)
    return avg_comparison(trailing_avg,current_qtr)

#unpacking a sequence of tuples of varying length
records = [
    ('foo',1,2),
    ('bar','hello'),
    ('foo',3,4),
]

def do_foo(x,y):
    print('foo',x,y)

def do_bar(s):
    print('bar',s)

for tags, *args in records:
    if tag == 'foo':
        do_foo(*args)
    elif tag == 'bar':
        do_bar(*args)

#unpacking combined with string processing operations
line = 'nobody:*:-2:-2:Unprivileged User:/var/empty:/usr/bin/false'
uname,*fields,homedir,sh = line.split(':')