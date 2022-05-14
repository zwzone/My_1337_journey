#!/bin/sh
git log --pretty=oneline -n 5 | cut -f 1 -d " " 
