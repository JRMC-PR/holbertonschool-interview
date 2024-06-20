#!/usr/bin/python3
"""This module contains a function that calculates the fewest number of
operations needed to result in exactly n H characters in the file."""

def minOperations(n):
    """This function calculates the fewest number of operations needed to
    result in exactly n H characters in the file."""
    if n <= 1:
        return 0
    operations = 0
    i = 2
    while i <= n:
        if n % i == 0:
            n = n / i
            operations += i
        else:
            i += 1
    return operations
