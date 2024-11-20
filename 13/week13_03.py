# week13_03.py
# id : 202444066
# name : jeon doheon

# file -> text file
# datetime -> str -> 저장
# 읽기 -> str -> datetime
from datetime import datetime as dt

# %Y 연도
# %m 월
# %d 일
# %H 시간
# %M 분
# %S 초
# %f 마이크로세컨드

dtformat = "%Y-%m-%d %H:%M:%S.%f"

d = dt.now()  # type(d) => datetime.datetime
d1 = dt.strftime(d, dtformat)  # f : format 날짜/시간 타입 -> 문자 타입
d2 = dt.strptime(d1, dtformat)  # p : parse 문자 타입 -> 날짜/시간 타입

print(type(d),d)
print(type(d1),d1)
print(type(d2),d2)
