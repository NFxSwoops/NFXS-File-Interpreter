print("Enter the value the gantry needs to move too, then type 'end' at the end to signal the slicer the end of the file. The string of data is the array that needs to be saved to the arduino cpp file.")
userProcess = None
instructions = []
def appendEnd():
  instructions.append(731)
while userProcess != "end":
  xPos = input("xPos: ")

  try:
    if xPos == "end":
      userProcess = xPos
      appendEnd()
      break
  except:
    pass
  
  yPos = input("yPos: ")
  try:
    if yPos == "end":
      userProcess = yPos
      appendEnd()
      break
  except:
    pass
  
  utensilAction = input("Gantry Action: ")
  try:
    if utensilAction == "end":
      userProcess = utensilAction
      appendEnd()
      break
  except:
      pass

  instructions.append(int(xPos))
  instructions.append(int(yPos))
  instructions.append(int(utensilAction))
userProcess = len(instructions)
print('float NFXSFile[')
print(str(userProcess))
print('] =')
print(instructions)
