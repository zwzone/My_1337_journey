#!/bin/sh
find . -name "*.sh" | rev | cut -f 1 -d '/' | cut -c 4- | rev
