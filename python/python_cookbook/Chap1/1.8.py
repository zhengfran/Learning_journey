#Calculations with Dictionaries

price = {
    'ACME':45.23,
    'AAPl':612.78,
    'IBM':205.55,
    'HPQ':37.20,
    'FB':10.75,
}

#zip invert the keys and values
#Note: the iterator created by zip can only be consumed once
min_price = min(zip(price.values(),price.keys()))
max_price = max(zip(price.values(),price.keys()))
prices_sorted = sorted(zip(prices.values(),prices.keys()))