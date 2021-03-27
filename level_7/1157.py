import operator

message = input()
result_dic = {}

for key in message:
    if key.upper() in result_dic.keys():
        result_dic[key.upper()] += 1
    else:
        result_dic[key.upper()] = 1

result = sorted(result_dic.items(), key=operator.itemgetter(1), reverse=True)

if result[0][1] == result[1][1]:
    print("?")
else:
    print(result[0][0].upper())