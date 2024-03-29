#!/usr/bin/python3
"""
takes in an argument and displays all values in the states
table of hbtn_0e_0_usa where name matches the argument
AND SAFE FROM INJECTION"""
import sys
import MySQLdb

if __name__ == "__main__":
    db = MySQLdb.connect(host="localhost", port=3306, user=sys.argv[1],
                         passwd=sys.argv[2], db=sys.argv[3])
    c = db.cursor()
    c.execute("SELECT * FROM `states` ORDER BY `id` ASC")
    rows = c.fetchall()
    for row in rows:
        if row[1] == sys.argv[4]:
            print(row)
    c.close()
    db.close()
