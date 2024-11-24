from array import array
aaryas_array = array('i', [1, 2, 3, 4, 5])
print(f"original array: {aaryas_array}")

aaryas_array.insert(2, 19) #inserted a new elemsnt 19 at index no 2
print(f"updated new array after inserting new element is: {aaryas_array}")

element_2 = aaryas_array[0] #accessing element at index 0
print(f"element at index 0 is : {element_2}")

index_no = aaryas_array.index(5) #finding inedx where 5 number lies in our array
print(f"index where '5' lies is: {index_no} ")

print("iterating through aaryas_array gives: ")
for element in aaryas_array: #iterating through aaryas_array and printing each n every element in aaryas_array
    print(element)

aaryas_array.append(10) #new element 10 is added at the end  of array
print(f"array after appending new element is: {aaryas_array}")

aaryas_array.pop(2) #removed element at index 2
print(f"updated array after using pop is: {aaryas_array}")

aaryas_array.remove(10) #removed element "10"
print(f"array after removing element 10 is: {aaryas_array}")

length = len(aaryas_array) #using len() to find length of aaryas_array
print(f"length of my array is: {length}")

