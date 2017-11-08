#!/usr/bin/python
import sys

def main(argv):
    
    states =['California', 'Oregon', 'Washington', 'Florida']
    
    if len(argv) < 2:
        print "Enter a state"
    else:
        for arg in argv[1:]:
            states.append(arg)        
        for state in states:
            print(state)

if __name__ == "__main__":
    main(sys.argv)


