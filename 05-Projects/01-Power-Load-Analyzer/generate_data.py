f = open("data.csv","w")
f.write("timestamp,load_kw\n")
for day in range (3):
    date = f"2026-09-{18 + day}"
    for m in range (0,24*60,15):
        hour = m // 60
        minute = m % 60
        if m < 3*60:
            load = 0.6+(0.5-0.6)*(m-0)/(3*60-0)
        elif m <= 6*60:
            load = 0.5
        elif m <= 9*60:
            load = 0.5+(2.0 - 0.5)*(m - 6*60)/(9*60 -6*60)
        elif m < 14 * 60:           
            load = 2.0 + (2.2 - 2.0) * (m - 9 * 60) / (14 * 60- 9 * 60)
        elif m <= 17*60:
            load = 2.2 + (2.5 - 2.2) * (m - 14 * 60) / (17 * 60- 14 * 60)
        elif m <= 19*60:
            load = 2.5 + (3.2 - 2.5) * (m - 17 * 60) / (19 * 60- 17 * 60)
        elif m <= 21*60:
            load = 3.2 + (1.5 - 3.2) * (m - 19 * 60) / (21 * 60- 19 * 60)
        elif m <= 23*60:
            load =  1.5 + (0.6 - 1.5) * (m - 21 * 60) / (23 * 60- 21 * 60)   
        else:
            load = 0.6 
        f.write(f"{date} {hour:02d}:{minute:02d}:00,{load}\n")
f.close()
