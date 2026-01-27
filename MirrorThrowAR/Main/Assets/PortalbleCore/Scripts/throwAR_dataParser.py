import csv
import os

# Directory containing the .csv files
directory = "./og_csvs"

for file_name in os.listdir(directory):
    if file_name.endswith(".csv"):
        file_path = os.path.join(directory, file_name)

        # Dictionary to store the data
        data = {}

        # Open the input file and read the data
        with open(file_path, 'r') as file:
            reader = csv.reader(file)
            for row in reader:
                # Check if the value in the first column already exists in the dictionary
                if row[0] in data:
                    # If yes, update the value in the dictionary
                    #I need to swap positions in dictionary instead of this; to the latest position
                    data.pop(row[0])
                    data[row[0]] = row
                else:
                    # If no, add the value to the dictionary
                    data[row[0]] = row

        # Open the input file and write the data
        with open(file_path, 'w', newline='') as file:
            writer = csv.writer(file)
            for row in data.values():
                writer.writerow(row)