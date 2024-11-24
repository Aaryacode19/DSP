import numpy as np #imported numpy lib as np
py_list = [1,2,3,4,5,6]
print(f"python list: {py_list}")
py_array = np.array(py_list) #converting this py_list into numoy array and storing it in variable py_array
print(f"numpy array from python list: {py_array}")
print(f"Shape: {py_array.shape}")
print(f"Data type : {py_array.dtype}")
print(f"Size: {py_array.size}")
print(f"No of dimensions: {py_array.ndim}" '\n')


#---------------------------------------------------------------#
#creating numpy array of zeroes using in build funcn
zero_array = np.zeros((2, 3)) #here 2 means no of rows and 3 means no of columns
print("array of zeroes: ")
print(zero_array)
print(f"Shape: {zero_array.shape}")
print(f"Data type : {zero_array.dtype}")
print(f"Size: {zero_array.size}")
print(f"No of dimensions: {zero_array.ndim}" '\n')


#-----------------------------------------------------------------#
#creating numpy array of ones using inbuild funcn
ones_array = np.ones((3, 3)) #similarly 3 means no of rows and next 3 means no of columns
print("Array of ones:")
print(ones_array)
print(f"Shape: {ones_array.shape}")
print(f"Data type : {ones_array.dtype}")
print(f"Size: {ones_array.size}")
print(f"No of dimensions: {ones_array.ndim}")
