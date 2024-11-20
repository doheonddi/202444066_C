# week13_B_04.py
# id : 202444066
# name : jeon doheon
from datetime import datetime as dt

dtformat = "%Y-%m-%d %H:%M:%S"
    
cars=[]
while True:
    
    number = input("차량번호: ").strip()
    if number == "":
        break
    intime = input("입차시간: ")
    dt.strptime(intime, dtformat)

    outtime = input("출차시간: ")
    dt.strptime(outtime, dtformat)
    
    cardata = {'num':number, 'in':intime, 'out':outtime}
    cars.append(cardata)

for car in cars:
    print(car['num'], car['in'], car['out'])
