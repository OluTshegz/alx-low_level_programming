#!/usr/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]

def find_largest_palindrome():
    largest_palindrome = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product
    return largest_palindrome

result = find_largest_palindrome()

# Format the result as a fixed-width string with leading zeros
formatted_result = f"{result:06d}"

# Save the result to a file in one line without newline or extra space
with open('102-result', 'w') as file:
    print(formatted_result, end='', file=file)
