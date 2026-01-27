import csv
import matplotlib.pyplot as plt

# Open the .csv file and read the first row to find the index of the "Projectile_y" column
with open("test.csv", "r") as csvfile:
    reader = csv.reader(csvfile)
    header = next(reader)
    print(header[:][10])

    y_index = header[:][10]


# Read the "Projectile_y" column and store the values in a list
y_values = []
with open("test.csv", "r") as csvfile:
    reader = csv.reader(csvfile)
    next(reader)  # Skip the header row

    for row in reader:
        print(row)
        if len(row) <= 1:
            continue
        elif row[10] != '':
            y_values.append(float(row[10]))
        else:
            print("Msg: Something else is happening here")

# Create a horizontal scatter plot with the values in the "Projectile_y" column
            
#plt.scatter(range(len(y_values)), y_values, #orientation='horizontal')

plt.scatter(range(len(y_values)), y_values,color='#dde7dd',edgecolors = 'black', linewidth = 0.75)
plt.xlim(0, len(y_values))

plt.xlabel('Throws across participants')
plt.ylabel('Projectile_y')
plt.show()

plt.savefig("y_plotter.png")
