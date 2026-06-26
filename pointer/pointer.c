# WHILE loop run as long as acondition is still True.
# it stops when the condition is false
# use'WHILE' loop to keep asking the user to enter a
# number and stop when the type/enetr zero (0).
# Then display to the user the list of entered numbers
list_of_numbers =[]
number = int(input("Type a number (Enter 0 to stop): "))
while number != 0:
    list_of_numbers.append(number)
    number = int(input("Type a number (Enter 0 to stop): "))
print(f"you entered: {list_of_numbers}")
