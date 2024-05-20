#!/usr/bin/python3
"""
This module contains a function that determines if all boxes can be opened.
"""


def canUnlockAll(boxes):
    """
    Determines if all boxes can be opened.

    Parameters:
    boxes (list): A list of lists, where each inner list
    contains keys to other boxes.

    Returns:
    bool: True if all boxes can be opened, else False.
    """
    # Create a set to store the indices of the boxes that can be opened
    opened_boxes = {0}

    # Create a list to store the keys found in the boxes
    keys = list(boxes[0])

    # While there are keys that can open boxes
    while keys:
        # Get the next key
        key = keys.pop()

        # If the key corresponds to a box that hasn't been opened yet
        if key < len(boxes) and key not in opened_boxes:
            # Add the box to the set of opened boxes
            opened_boxes.add(key)

            # Add the keys in the box to the list of keys
            keys.extend(boxes[key])

    # If the number of opened boxes is equal to the total number of boxes
    if len(opened_boxes) == len(boxes):
        # All boxes can be opened
        return True
    else:
        # Not all boxes can be opened
        return False
