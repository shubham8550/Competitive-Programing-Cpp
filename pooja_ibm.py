def calculateScore(responses):
    score = 0
    for response in responses:
        question, correct, candidate = response.split(',')
        if question[-1] == '%':
            if correct == candidate:
                score += 1
            else:
                score -= 0.25
        elif question[-1] == '$':
            if correct == candidate:
                score += 3
            else:
                score -= 1
        elif question[-1] == '^':
            if correct == candidate:
                score += 2
            else:
                score -= 0.5
    print(score)
    if score >= 15:
        print('pass')
    else:
        print('fail')
    
responses = [
"01%,a,a",
"Q2^,a,b",
"Q3%,c,c",
"Q4$,c,c",
"Q5%,d,a",
"06$,b,b",
"Q7%,b,b",
"Q8$,b,b",
"Q9%,a,*",
"Q1^,a,a",
"Q11$,a,a",
"Q12^,b,b",
"Q13$,c,b",
"Q14^,c,d",
"Q15^,d,d"
]
print(calculateScore(responses))