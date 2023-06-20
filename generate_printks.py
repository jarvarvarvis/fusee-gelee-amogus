message_file = open("message.txt")
lines = message_file.readlines()

for line in lines:
    trimmed_line = line.replace("\n", "")
    print(f"printk(\"{trimmed_line}\");")
