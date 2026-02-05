def hello():
    print("hello world!")

def full_name(first, last):
    return(f"{first} {last}")

hello()
print(full_name("mayzi","bless"))
name = full_name("addie", "bless")
print(f"{name} doesn't like {full_name('kai', 'bless')}")


def factoral(number):
    total = 1
    for i in range(1, number +1):
        total *= i
    return total

for num in range(1,10):
    print(f"the factoral of {num} is {factoral(num)}")

name = "Mayzi bless"

def admin():
    print(f"{name} is the admin for the lab!")


admin()