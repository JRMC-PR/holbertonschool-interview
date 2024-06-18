#!/usr/bin/python3
""""This modlue parses logs"""

# 138.177.72.56 - [2024-06-18 08:48:09.143003] "GET /projects/260 HTTP/1.1" 500 256
#   1           2           3        4          5             6     7       8    9

# Todo: Read input
# Todo: Parse input
# Todo: Print stats every 10 lines
# Variables
log_input = input()
parsed_data = []
file_size = 0
status_codes = {
    "200": 0,
    "301": 0,
    "400": 0,
    "401": 0,
    "403": 0,
    "404": 0,
    "405": 0,
    "500": 0,
}
while log_input:
    # Verify that the data is complete
    for i in range(10):
        # parse the data
        parsed_data.append(log_input.split())
        if len(parsed_data[i]) != 9:
            log_input = input()
            continue
        # count file size
        file_size += int(parsed_data[i][8])
        # add status code to dictionary
        key = parsed_data[i][7]
        status_codes[key] += 1

    # print the stats
    print(f"File size: {file_size}")
    for key, value in status_codes.items():
        if value != 0:
            print(f"{key}: {value}")

    # reset the variables
    parsed_data = []
    # print(log_input)
    log_input = input()
