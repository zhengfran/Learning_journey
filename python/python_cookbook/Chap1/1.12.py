#Determine the Most Frequently Occuring Items in a Sequence
words = [   'look', 'into', 'my', 'eyes', 'look', 
    'into', 'my', 'eyes',   'the', 'eyes', 'the', 'eyes', 'the', 'eyes', 
    'not', 'around', 'the',   'eyes', "don't", 'look', 'around', 'the', 'eyes', 'look', 'into',  
    'my', 'eyes', "you're", 'under'
]

from collections import Counter
#Counter generates a dictonary of words vs its number of occurence
word_counts = Counter(words)
top_three = word_counts.most_common(3)
print(top_three)

#update with another words array
morewords = ['why','are','you','not','looking','in','my','eyes']
word_counts.update(morewords)