import random #library code someone else wrote, always import at the top
start = 10

while start >= 1:
    print(start)
    start -= 2

goose = random.randint(1,20)
count = 1

while count < goose:
    print("duck")
    count +=1
print("GOOSE!")

number = random.randint(1,25)

while True:
    guess = int(input("guess a number between 1 and 25: "))
    if guess == number:
        print(f"congradulations!!! {number} was the correct number!")
        break #exit the loop
    elif guess > 25:
        print("that isnt an option DUMB DUMB '^'")
    elif guess < number:
        print("number is higher")
    else:
        print("number is lower")