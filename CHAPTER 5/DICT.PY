marks = {
    "harsh":90,
    "rohan":80,
    "mohit":70,
    "rohit":60,
    "rahul":50,
    
}
print(marks)
print(type(marks))
print(marks["rohan"])
#dictionary methods
print(marks.keys())
#it return the keys of the dictionary
print(marks.values())
#it return the values of the dictionary
print(marks.items())
#it return the items of the dictionary
print(marks.get("rohan"))
print(marks["rohan"])
marks.update({"sarthak":100})
print(marks)

print(marks.get("rohan2")) #it return none if the key is not found
print(marks["rohan2"]) #it return the key error if the key is not found