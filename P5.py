#Write a program in Python to demonstrate the concept of a Constructor

class Bike:
    def __init__(self, name, model):
        self.name = name
        self.model = model

    def display_bike(self):
        print(f"name of bike is{self.name}")
        print(f"model of bike is{self.model}")

yamaha = Bike("FZ-X", "2024")
yamaha.display_bike()
