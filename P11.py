	import numpy as np

# Create a 2D numpy array
array = np.array([[10, 20, 30, 40],
                  [50, 60, 70, 80],
                  [90, 100, 110, 120]])
print("Original Array:")
print(array)

element_00 = array[0, 0]  #Accessing Element at first row, first column
print("\nAccessing Specific Elements:")
print(f"Element at (0, 0): {element_00}")

element_21 = array[2, 1]  #Accessing Element at third row, second column
print(f"Element at (2, 1): {element_21}")

row_1 = array[1, :]  #Accessing entire second row
print("\nAccessing Entire Rows and Columns:")
print(f"Second Row: {row_1}")

column_2 = array[:, 2]  #Accessing entire third column
print(f"Third Column: {column_2}")

# Slicing operations
subarray_1 = array[0:2, 1:3]  #Subarray from first two rows and columns 1 to 2
print("\nSlicing Operations:")
print(f"Subarray (0:2, 1:3):\n{subarray_1}")

subarray_2 = array[::2, ::2]  #Every second row and every second column
print("Every second row and column:")
print(subarray_2)

# Boolean indexing
boolean_mask = array > 50
print("\nBoolean Indexing:")
print(f"Boolean Mask:\n{boolean_mask}")

boolean_indexed_array = array[boolean_mask]  # Elements greater than 50
print(f"Elements greater than 50:\n{boolean_indexed_array}")

indices = [0, 2]
fancy_indexed_array = array[indices, :]
print("\nFancy Indexing:")
print(f"Rows 0 and 2:\n{fancy_indexed_array}")
