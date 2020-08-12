#!/usr/bin/python3
"""method that calculates the fewest numbers of 
operations needed to result in specific characters in a file"""


def minOperations(n):
    """ sum of factors"""
    if n <= 1:
        return 0

    operation = 0
    while n > 1:
        for f in range(2, n + 1):
            if n % f == 0:
                operation += f
                break

    return operation
