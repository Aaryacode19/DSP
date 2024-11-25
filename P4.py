class ValueError(Exception):
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)

class TypeError(Exception):
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)

def exception_handling_funcn(value):
    try:
        if value < 0:
            raise ValueError("Value cannot be -ve")

        if not isinstance(value, int):
            raise TypeError("Value must be an int")

        try:
            with open("non_existing_file", "r") as file:
                content = file.read()
        except FileNotFoundError as e:
            print(f"FileNotFoundError: {e}")

        if value == 10:
            raise ValueError("value cannot be 10")

    except ValueError as ve:
        print(f"ValueError: {ve}")
    except TypeError as te:
        print(f"TypeError: {te}")
    except ValueError as cve:
        print(f"CustomValueError: {cve}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

print("if num is -ve")
exception_handling_funcn(-19)

print("if num is not an integer")
exception_handling_funcn("hehe")

print("if num is valid , this will cause file not found error")
exception_handling_funcn(19)

print("if num is valid, this will cause value error")
exception_handling_funcn(10)

print("if no is valid n file exist it does not cause any exception, i.e num < 0")
exception_handling_funcn(3)

