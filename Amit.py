import os
from random import randint

for i in range(1, 19):

    for j in range(0,19 ):
        d = str(i) + ' days ago'
        with open('Amite.txt', 'a') as file:
            file. write(d)
        os.system('git add .')
        os. system('git commit --datez"' + d + '" -m "commit"')
os.system('git push -u origin main')
