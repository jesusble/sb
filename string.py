def rev(s): 
  str = "" 
  for i in s: 
    str = i + str
  return str
  
s = "aabbcc"
  
print ("The string  is : ",end="") 
print (s) 
  
print ("The reversed string is : ",end="") 
print (rev(s))

