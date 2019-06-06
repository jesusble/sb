def  reverseWordSentence(Sentence): 
  words = Sentence.split(" ") 
  newWords = [word[::-1] for word in words] 
  newSentence = " ".join(newWords) 
  return newSentence 
Sentence = "python is easy programming knowledge"
print(reverseWordSentence(Sentence))
