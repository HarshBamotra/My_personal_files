#Program to scan ports using nmap

import nmap

def ScanPorts(target,n):
    s = nmap.PortScanner()
    for i in range(n):
        result = s.scan(target, str(i))
        result = result['scan'][target]['tcp'][i]['state']
        print("Port ", i, " is ", result, ".")

run = True
while(run):
    print("********** Port Scanner Menu **********") 
    print("1. Scan first 1000 ports.")
    print("2. Scan all ports.")
    print("3. Exit.")
    choice = int(input("Enter your choice ::"))
    if(choice == 1):
        ip = input("Enter the target IP address ::")
        print("Scanning ports ............")
        ScanPorts(ip, 1000)
    elif(choice ==2):
        ip = input("Enter the target IP address ::")
        print("Scanning ports ............")
        ScanPorts(ip, 65535)
    else:
        print("Exiting ........")
        print("3")
        print("2")
        print("1")
        print("Thank You for using Port Scanner.")
        run = False
