# week13_02.py
# id : 202444066
# name : jeon doheon

import datetime
from datetime import datetime as dt

dt1 = dt.now()
print(type(dt1))
print(dt1)

dt1 = datetime.datetime.now()
print(type(dt1))
print(dt1)

print(dt1.year, dt1.month, dt1.day)
print(dt1.hour, dt1.minute)
print(dt1.second, dt1.microsecond)

print(dt1.weekday())
print(type(dt1.date()), dt1.date())
print(type(dt1.time()), dt1.time())
