# week13_B_03.py
# id : 202444066
# name : jeon doheon

cars=[]
while True:
    
    number = input("차량번호: ").strip()
    if number == "":
        break
    intime = input("입차시간: ")
    outtime = input("출차시간: ")

    cardata = {'num':number, 'in':intime, 'out':outtime}
    cars.append(cardata)

for car in cars:
    print(car['num'], car['in'], car['out'])
