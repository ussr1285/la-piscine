#!/bin/bash
gitlogTail5=`git log --pretty=format:"%H" | head -5`
# gitlogTail5=$gitlogTail5 | tr " " "\n"
# printf $gitlogTail5

echo $gitlogTail5 | tr " " "\n"
