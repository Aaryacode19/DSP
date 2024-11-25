class Car:
    def __init__(self, make):
        self.make = make

    def start(self):
        return "Engine started"

    def __str__(self):
        return f"Car: {self.make}"


class Sedan(Car):
    def __init__(self, make, model_name):
        super().__init__(make)
        self.model_name = model_name

    def start(self):
        return "Engine starts smoothly"

    def __str__(self):
        return f"Sedan: {self.make}, Model: {self.model_name}"


class SUV(Car):
    def __init__(self, make, offroad):
        super().__init__(make)
        self.offroad = offroad

    def start(self):
        return "Engine starts"

    def __str__(self):
        return f"SUV: {self.make}, Offroad Capable: {self.offroad}"


def main():
    my_sedan = Sedan(make="Honda", model_name="Civic")
    my_suv = SUV(make="Jeep", offroad="High")

    print(my_sedan)
    print(my_sedan.start())

    print(my_suv)
    print(my_suv.start())


if __name__ == "__main__":
    main()
