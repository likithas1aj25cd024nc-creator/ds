N=int(input("enter how many numbers you want to enter:"))
number=[ ]
for i in range(N):
    num=float(input("enter number{}:".format(i+1)))
    numbers.append(num)
mean=statistics.mean(numbers)
variance=statistics.pvariance(numbers)
std_deviation+statistics.pstdev(numbers)
print("\n result:")
print("numbers entered:",numbers)
print("mean=",mean)
print("variance+",variance)
print ("standard deviation=",std_deviation)     
