def identify_keywords(text):  
    import re
    from collections import Counter
    k_list = ["zynx", "aryan", "dabbi", "yash", "harshit"]

    text = text.lower()
    words = re.findall(r'\b\w+\b', text)

    word_counts = Counter(words)

    keywords = [word for word, count in word_counts.items() if word in k_list]

    return keywords

def main():

    with open("D:\\GIT\\CD_lab\\input_file.txt", "r") as file:
        text = file.read()

    keywords = identify_keywords(text)
    print("Identified Keywords:", keywords)

main()