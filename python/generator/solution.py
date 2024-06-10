with open("input.txt", "r") as input_file:
    # Read input from input.txt
    n = int(input_file.readline().strip())

# Perform necessary operations

with open("output.txt", "w") as output_file:
    # Write output to output.txt
    output_file.write(str(n * n))