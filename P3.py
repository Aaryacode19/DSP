#Write a program to read data from a text file, process the data (such as counting words, lines, and characters), and write the processed data to a new file.
#Handle potential exceptions that may occur during file operations.
try:
    with open("file1.txt", "r") as file1:
        len_words = 0
        len_lines = 0
        len_char = 0

        for line in file1:
            len_lines += 1
            word = line.split()
            len_words = len(word)
            len_char += len(line)

        print(len_words, len_char, len_lines)

    with open("file2.txt", "w") as file2:
        file2.write(f"hiii {len_lines}, {len_char}, {len_words}")
except FileNotFoundError:
    print(f"file not found {file1}")
except IOError:
    print(f"Error: An IOError occurred while handling the file.")
except Exception as e:
    print(f"An unexpected error occurred: {e}")
