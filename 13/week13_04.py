# week13_04.py
# id : 202444066
# name : jeon doheon

import datetime as dt

d1 = dt.datetime(2030, 10, 2, 18, 0, 2, 200)
d2 = dt.datetime(2031, 10, 3, 1, 3, 3, 202)

t = d2 - d1
print(type(t))  # timedelta
print(t)
print(t.days)
# print(t.hours)
print(t.seconds)
print(t.microseconds)


print(t.total_seconds())
d3 = d1 + dt.timedelta(datys=29)
d4 = d1 + dt.timedelta(datys=-29)
print(d3)
print(d4)
