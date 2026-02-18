numbers = [3, 23432, 23423, 4564, 345, 65, 443, 235, 123,]
names = ["alex", "mayzi", "sally", "addie", "jace", "leah", "sunny", "stormy"]

names[0] = "Eric"
names.append("jayshree") #adds to end of the list
index = names.index("mayzi")
names.pop(index)
print(len(names))
print(names)

for name in names:
    print(f"hello {names}")

for number in numbers:
    print(f"{number} - 10 = {number-10}")

for i in range(20):
    print(f"this is the {i} iteration of this loop")