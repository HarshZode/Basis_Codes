'''

def Passanger(Total_No_of_Passanger):

    for x in range (1,Total_No_of_Passanger+1):
        if x <= Total_No_of_Passanger:
                print("Immigration check done for passenger", x )

                x+=1



Passanger(150)


'''



'''
import turtle                 # allows us to use the turtles library

wn = turtle.Screen()     # creates a graphics window
wn.setup(500,440)      # set window dimension

circle_rad=60              # set the radius
rectangle_width=240   # set the width
rectangle_height=30   # set the height

alex = turtle.Turtle()   # create a turtle named alex
alex.shape("turtle")    # alex looks like a turtle
alex.color('blue')         # alex has a color
alex.circle(circle_rad)
alex.backward(rectangle_width/2)
alex.forward(rectangle_width)
alex.right(90)
alex.forward(rectangle_height)
alex.right(90)
alex.forward(rectangle_width)
alex.right(90)
alex.forward(rectangle_height)


'''

'''

#PF-Assgn-3
#This verification is based on string match.

mileage=12
amount_per_litre=72
distance_one_way=102
per_head_cost=0
divisible_by_five=False

#Start writing your code from here
per_head_cost = (amount_per_litre/mileage)*distance_one_way*2/ 4

def divisible(per_head_cost):
    if (per_head_cost % 5 == 0):
     return True

    else:
        return False

divisible_by_five = divisible(per_head_cost)

#Populate the variables: per_head_cost and divisible_by_five



#Do not modify the below print statements for verification to work
print(per_head_cost)
print(divisible_by_five)
'''
'''
def purchase_mobile(price,brand):
    if brand =="Apple":
        discount = 10
    else :
        discount = 5

    total_price = price - price * discount/100
    print("The Total Price of" +brand+ "is" +str(total_price))


def purchase_shoe(price, material):
    if material == "lether" :
        tax = 5
    else :
        tax = 2

    total_price = price = price * tax /100
    print("Total price of" +material+ "is" +str(total_price))


purchase_mobile(20000,"Apple")
purchase_shoe(200,"leather")
'''
'''

def purchase_product(product_type,price,mobile_brand,material):
    if product_type == "Mobile":
        if mobile_brand == "Apple":
            discount = 10
        else:
            discount = 5
        total_price = price - price * discount / 100
    else:
        if material == "leather":
            tax = 5
        else:
            tax = 2
        total_price = price + price * tax / 100
    print("Total price of "+product_type+" is "+str(total_price))



''''''
class Employee():
    def __init__(self, name = "none", age = "none", salary = "none"):
        self.Employee_name = name
        print("The Employee's name is", self.Employee_name)
        self.Employee_age = age
        print("The Employee's age is", self.Employee_age)
        self.Employee_salary = salary
        print("The Employee's salary is", self.Employee_salary)

'''
'''

class Table:
    def __init__(self):
        self.no_of_legs=4
        self.glass_top=None
        self.wooden_top=None
    def identify_rate(self):
        if(self.glass_top==True):
            rate=20000
        elif(self.wooden_top==True):
            rate=30000
        else:
            rate=0
        return rate
dining_table=Table()

print (dining_table.identify_rate())

'''
class Mobile:
    def __init__(self,brand,price):
        self.brand = brand
        self.price = price

mob1=Mobile("Apple", 1000)
mob2=Mobile("Samsung", 5000)
mob3=Mobile("Apple", 3000)

mob_dict={
          "m1":mob1,
          "m2":mob2,
          "m3":mob3
          }


for key,value in mob_dict.items():
    if value.price > 3000:
        print (value.brand,value.price)




