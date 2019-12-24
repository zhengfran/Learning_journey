#using slices

record = '....................100          .......513.25     ..........'
cost = int(record[20:32]) * float(record[40:48])

SHARES = slice(20,32)
PRICE - slice(40,48)

cost = int (record[SHARES]) * float(record[PRICE])