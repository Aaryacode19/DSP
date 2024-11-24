#1.Creating a 1D Array:
import numpy as np

arr = np.array([1, 2, 3, 4, 5, 6])

#2.Reshaping the Array:
reshaped_arr = arr.reshape(2, 3)

#3.Transposing the Array:
transposed_arr = reshaped_arr.transpose()

#4.Swapping Axes:
swapped_arr = reshaped_arr.swapaxes(0, 1)


