#!/bin/bash
find . -type f -name "*.sh" | rev | cut -c4- | rev | sed s'/.*\///' 
