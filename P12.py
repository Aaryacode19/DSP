import numpy as np

# Create a NumPy array
data = np.array([10, 20, 30, 40, 50, 60, 70, 80, 90, 100])

# Calculate mean
mean = np.mean(data)
print(f"Mean: {mean}")

# Calculate median
median = np.median(data)
print(f"Median: {median}")

# Calculate standard deviation
standard_deviation = np.std(data)
print(f"Standard Deviation: {standard_deviation}")

# Calculate variance
variance = np.var(data)
print(f"Variance: {variance}")

# Calculate percentiles
percentiles = np.percentile(data, [25, 50, 75])
print(f"25th Percentile: {percentiles[0]}")
print(f"50th Percentile (Median): {percentiles[1]}")
print(f"75th Percentile: {percentiles[2]}")

# Create another NumPy array for correlation example
data2 = np.array([15, 25, 35, 45, 55, 65, 75, 85, 95, 105])

# Calculate correlation coefficient between two arrays
correlation = np.corrcoef(data, data2)[0, 1]
print(f"Correlation Coefficient: {correlation}")
