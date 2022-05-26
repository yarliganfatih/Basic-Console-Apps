# Matrix Tiredness Calculator

Imagine a field of 10x10 parcels in a 2D plane. The fertility of the soil increases if it is planted every year, and decreases if it is not. The years of planting and the area of the parcels planted for that year are taken from the user. Assume the productivity of plots in the first written year 2. Let's output the latest status of the field in 2020.

- Efficiency does not fall below 0.
- Years greater than **2020** are not calculated.
- Years are written in order, non-october years are indicated with the input "2016 0".

### Input Structure:
each; [Year] [Count]
the cultivated area; [top-left-x] [top-left-y] [bottom-right-x] [bottom-right-y]

### Sample Input:
```
2014 2
1 1 6 6
4 4 9 9
2015 0
2016 3
1 1 4 4
5 2 7 5
2 7 7 9
2017 0
2018 2
0 0 2 2
6 6 9 9
2019 0
2020 2
0 1 2 3
4 4 8 8
```

### Sample Output:
```
0 0 0 0 0 0 0 0 0 0
1 3 3 0 0 0 0 0 0 0
1 3 3 0 0 0 0 0 0 0
1 1 1 0 0 0 0 0 0 0
0 0 0 0 3 3 3 1 1 0
0 0 0 0 1 3 3 1 1 0
0 0 0 0 1 1 3 1 1 0
0 0 0 0 1 1 3 3 1 0
0 0 0 0 1 1 3 3 1 0
0 0 0 0 0 0 1 1 0 0
```

![image](https://user-images.githubusercontent.com/54783062/170573461-ec3b747f-79da-4f63-adac-9edab23ca198.png)