#!/bin/python3
from datetime import date

def calc_diff(sdate, month, year, time, utc, tdate, tmonth, tyear, ttime, tutc):
    seconds = 0
    
    d = {
        "January": 1,
        "Febuary": 2,
        "March": 3,
        "April": 4,
        "May": 5,
        "June": 6,
        "July": 7,
        "August": 8,
        "September": 9,
        "October": 10,
        "November": 11,
        "December": 12
    }
    if(sdate > tdate):
        sdate,tdate = tdate,sdate
        month,tmonth = tmonth,month
        year,tyear = tyear,year
        time,ttime = ttime,time
        utc,tutc = tutc,utc
        
    
    a = date(int(year), d[month], int(sdate))
    b = date(int(tyear), d[tmonth], int(tdate))
    utcdiff = str(abs(int(tutc) - int(utc)))
    print(utcdiff)
    seconds += int(str(utcdiff)[0])*3600

    if(utcdiff != "0"):
        seconds += (int(str(utcdiff)[1])*10 + int(str(utcdiff)[2]))*60
    

    strt = [int(i) for i in time.split(":")]
    till = [int(i) for i in ttime.split(":")]

    if(strt[0] <= till[0] ):
        seconds += ((till[0] - strt[0])*3600)+((till[1] - strt[1])*60)+(abs(till[2]-strt[2]))


    diff = abs(a-b)
    z = str(diff)
    
    seconds += (int(z[0])) * 24 * 3600 if strt[0] < till[0] else 0
    
    return seconds

ask = int(input())

for i in range(0, ask):
    a = input().split()
    b = input().split()
    print(calc_diff(a[1], a[2], a[3], a[4], a[5], b[1], b[2], b[3], b[4], b[5]))
 
