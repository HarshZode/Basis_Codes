

#          FUNCTIONS

'''

 def celcius_to_kelvin(celcius):
    result = celcius + 273
    print(result)

celcius_to_kelvin(27)

'''

#        IF ELIF ELSE
'''
login = "harsh" 

if login == "harsh":
    print("HEY HARSH!! WHAT'S UP!")
elif login == "yash":
    print("HEY YASH!! WHAT'S UP!!")
else : 
    print("Please sign up!")

'''

#       LIST With Letters Length

'''
food = ['potato', 'tomato', 'drink', 'chocolate']

for f in food:
    print(f)
    print(len(f))

'''

#           RANGE

'''

for x in range(10):
    print ('I AM AWESOME!') 
#THIS PRINTS IT 10 times

'''

#           LOOP OR SERIES MAKER

###1

'''

for n in range(0,16):
    print(n)

'''

###2 Multiple Or Divisible

'''

for n in range(0,15, 5):
    print(n)
    
'''

#        WHILE and INCREMENT

###1 WHILE

'''

age = 10

while age <15:
    print("GO HOME!")
    
'''

###2 While And incresment

'''

age = 10

while age<15:
    print("GO HOME!!!")
    age+=1  #This Increases

if age >=15:
    print("OK COME TO PLAY WITH US!!")

'''

#          BREAK

'''

magicnumber = 5

for n in range(10):
    if n==magicnumber:
        print(15, "IS THE MAGIC NUMBER!! You Won!")

        break
    else:
        print("Better luck Next Time!")
        n += 1
        
'''

#        CONTINUE <-- it skips anything after it if satisfies

'''

number = [2, 4, 6, 8]

for n in range(1,10):
    if n in number:
        continue
    print(n)
    
'''
#      RETURN

'''
def allowed_age(age):
    answer = age + 15
    return answer

harsh_age = allowed_age(25)

print("for  harsh allowed age is", allowed_age(25))

yash_age = allowed_age(18)
print("for yash allowed age is", allowed_age(18))

'''

#     DEFAULT RANDOM VARIABLE / SETTING UP DEFAULT VARIABLE
#     ( IF IN FUNCTION NO VALUE IS THERE, IT AUTOMATICALLY PUTS IT TO DEFAULT VALUE)

'''

def gender(sex ='Unknown'):        # IN BRACKETS ANYTHING AFTER = WILL BE DEFAULT OUTPUT
    if sex == 'm':
        sex = 'male'
    elif sex == "f":
        sex = 'Female'
    print(sex)


gender('m')
gender('f')
gender()

'''

#         VARIABLE SCOPE

"IF A VARIABLE WITH CERTAIN VALUE IS ABOVE ANY FUNCTIONS, THOSE FUNCTIONS CAN USE THAT VARIABLE. "
"BUT IF THE VARIABLE IS INSIDE A FUNCTION, THEN ONLY THAT FUNCTION CAN ACCESS IT AND NO OTHER CAN"

#"all can access"

'''

a = 564

def Someone():
    print(a)

def NoOne ():
    print(a)

Someone()
NoOne()

'''

#"Only Someone can access"

'''
def Someone():
    a = 564
    print(a)

def NoOne ():
    print(a)

Someone()
NoOne()      #here it gives error as a is not specified for NoOne.

'''

#             KEYWORD ARGUMENT

'''
def sentence(name='Harsh', action='ate', item= 'cake'):
    print(name, action, item)

sentence()

sentence(name= 'Yash', item= 'cricket', action='plays')    # WE CAN HERE ENTER DIFFERENT/ JUMBLED FORMATE AND THE OUTCOME IS A CORRECT SENTENCE
                                                          #HERE WE SPECIFY WHICH WORD TO GO AT WHAT PLACE AND PASS THEM IN ANY ORDER YOU WANT!!
sentence('yash', 'ran', 'away')                            (#THIS ALSO WORKS)

'''

#  FLEXIBLE NO. OF ARGUMENTS

'''

def addno(*args):    #WE USE * IN THE FUNCTION TO DEFINE NO OF ARGUMENTS. ARGS IS FOR REFERENCE PURPOSE ONLY
    total=0
    for a in args:        #THIS FOR LOOP ADDS THE GIVEN NO. OF ARGUMENTS
        total += a    
    print(total)

addno(5,10, 564654654, 4654654, 54654654, 654654654)

'''

#           UNPACKING AN ARGUMENT

"IF AN ARGUMENT IN FUNCTION IS TO BIG, WE CANT TYPE EVERY SINGLE THING WITH COMA IN BETWN. SO WE USE THIS TECHNIQUE TO SIMPLIFY"

'''
def health_calculator(age, applesPerWeek, cig_smoked):
    answer = (100-age) + applesPerWeek*2 - cig_smoked
    print(answer)

harsh_health = [18, 17,0]   "<- 1"

health_calculator(*harsh_health)    "<-2"   'WE USE * SIGN BEFORE THE NAME TO UNPACK TH SET'
                                        "HERE 1 AND 2 DOES THE SAME WORK BUT 2 IS MORE EFFECIENT. JUST INSERT THE DATA AND WRITE THE NAME"
                                        
'''

#          SET

" WE USE { } THESE BRACKETS TO REPRESENT A SET. A REPEATED ITEM IN A SET IS NOT REPEATED."

'''

list ={"table", "ping pong ball", "hat", "ball", "hat", "lotion"}

print(list)


if "table" in list:
    print("Table is already in your list!")

'''
#             DICTIONARY

'''

classmates = {"Harsh": " smart one in class", "Yash": " sits behind me"}
                                                          # "K = ITEM NAME. V IS THE VALUE. ANYTHING AFTER : IS ITS VALUE"
for k,v in classmates.items():                            # HERE .ITEM IS USED FOR PYTHON TO READ EVERY SINGLE ITEM IN IT AND PERFORM ITS COMMAND
    print(k + v)

'''

#     INSERTING AN EXTERNAL PYTHON FILE WITH FUNCTION / MODULES

'''

"WE USE"

import k                                                # AND TO EXICUTE WE USE THE FOLLOWING COMMAND
                                                       # here lol is the function in fie k
k.lol()

 # IN THIS WAY WE CAN INSERT FILES AND EXCICUTE SPECIFIC FUNCTION EASILY
 
 '''

#               DOWNLOADING AN IMAGE FROM INTERNET WITH URL

'''
import random

import urllib.request

def download_web_image(url):
    name = random.randrange(1, 100)
    fullname = str(name) + ".jpg"
    urllib.request.urlretrieve(url, fullname)

download_web_image("https://media.gettyimages.com/photos/dandelion-seed-picture-id157681198?s=2048x2048")

'''

#         CREATING AND READING A FILE

'''

"I HAVE USED FILE_CREATE, BUT WEE CAN NAME IT ANYTHING"
file_create = open("sampletext.txt", 'w')                  #used "w" to write
file_create.write('HI HOPE THIS WORKS! PROPERLY\n')
file_create.write ('IF YOU ARE READING THIS IT WORKS!!\n')
file_create.write ('THIS ACTUALLY WORKS!!!! YESS!!')
file_create.close()

"SAME HERE, I WROTE IT FILE_READ FOR MY SAKE, BUT WE CAN NAME IT ANYTHING"
file_read = open("sampletext.txt", 'r')                  #used "r" to read
text= file_read.read()
print(text)
file_read.close()

'''
#   DOWNLOADING A CSV FILE WHICH IS WELL ORGANISED

'''

from urllib import request

theurl = 'https://query1.finance.yahoo.com/v7/finance/download/GOOG?period1=1565614933&period2=1597237333&interval=1d&events=history'

def download_file (cvl_url):
    response = request.urlopen(cvl_url)
    csv = response.read()             #1 for internet responce

    csv_str = str(csv)
    lines = csv_str.split("\\n")      #2 save as a string

    dest_url = r'the file.csv'
    fx = open(dest_url, "w")          #3 make a file

    for line in lines:
        fx.write(line + "\n")         #4 write in the file

    fx.close()                        #5 close


download_file(theurl)

'''

