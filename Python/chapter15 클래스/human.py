class Human:
    def __init__(self, age, name):
        self.age = age
        self.name = name
    
    def intro(self):
        print(str(self.age) + "살" + self.name + "입니다.")

kim = Human(29, "김원종")
kim.intro()
lee = Human(53, "이승우")
lee.intro()