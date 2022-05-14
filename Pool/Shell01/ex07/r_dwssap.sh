#!/bin/sh
cat /etc/passwd | grep -v ^"#" | awk "NR%2==0" | cut -d ':' -f 1 | rev | sort -r | awk -v a="$FT_LINE1" -v b="$FT_LINE2" 'NR>=a && NR<=b {print}' | tr "\n" ',' | sed 's/,/, /g'  | sed 's/, $/./g' | tr -d '\n'
