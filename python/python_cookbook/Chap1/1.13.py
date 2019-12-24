#sorting a list of dictionaries by a common key
rows = [    {'fname': 'Brian', 'lname': 'Jones', 'uid': 1003},    
    {'fname': 'David', 'lname': 'Beazley', 'uid': 1002},    
    {'fname': 'John', 'lname': 'Cleese', 'uid': 1001},    
    {'fname': 'Big', 'lname': 'Jones', 'uid': 1004}
]

from operator import itemgetter

rows_by_fname = sorted(rows, key = itemgetter('fname'))
rows_by_uid = sorted(rows,key=itemgetter('uid'))
print(rows_by_uid,'\n\n',rows_by_fname)

#itemgetter can also be accept multiple keys
rows_by_lfname = sorted(rows, key=itemgetter('lname','fname'))
print(rows_by_lfname)

#itemgetter can be replaced by lambda expressions, but itemgetter usuallt runs faster
rows_by_fname = sorted(rows,key=lambda r:r['fname'])
rows_by_lfname = sorted(rows,key=lambda r:r['lname','fname'])
