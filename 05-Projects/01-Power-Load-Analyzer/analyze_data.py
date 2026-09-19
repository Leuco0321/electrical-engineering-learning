import pandas as pd
import matplotlib.pyplot as plt
plt.rcParams['font.sans-serif'] = ['SimHei']
plt.rcParams['axes.unicode_minus'] = False

df = pd.read_csv("data.csv")
print(df.head())
df['date'] = pd.to_datetime(df['timestamp']).dt.date
daily = df.groupby('date')['load_kw'].sum()*0.25
print(daily)

peak = df['load_kw'].max()
peak_time = df.loc[df['load_kw'].idxmax(),'timestamp']
print("峰值:",peak,"kW,发生在",peak_time)

min_load = df['load_kw'].min()
min_time = df.loc[df['load_kw'].idxmin(),'timestamp']
print("最小负荷:",min_load,"kW,发生在",min_time)

day1 = df.head(96)
plt.plot(day1['timestamp'],day1['load_kw'])
plt.title("日负荷曲线")
plt.xlabel("时间")
plt.ylabel("负荷(kW)")
plt.grid(True)
plt.show()