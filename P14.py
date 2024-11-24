import pandas as pd
# Step 1: Create a dictionary of lists
data = {
 'Name': ['Alice', 'Bob', 'Charlie', 'David', 'Eve'],
 'Age': [25, 30, 35, 40, 45],
 'Salary': [70000, 80000, 90000, 100000, 110000]
}
# Step 2: Create a DataFrame from the dictionary
df = pd.DataFrame(data)
# Step 3: Explore the DataFrame using various methods
# Display the first few rows of the DataFrame
print("First few rows of the DataFrame:")
print(df.head())
print("\n")
# Display the last few rows of the DataFrame
print("Last few rows of the DataFrame:")
print(df.tail())
print("\n")
# Display a concise summary of the DataFrame
print("Summary of the DataFrame:")
print(df.info())
print("\n")
# Display descriptive statistics of the DataFrame
print("Descriptive statistics of the DataFrame:")
print(df.describe())

