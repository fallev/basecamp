cat /etc/passwd | grep -v '^#' | mawk -F: '{print $1}' | mawk 'NR % 2 == 0' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./g'