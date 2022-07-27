#!/bin/bash
git add .
read -p "Commit: " commit
git commit -m "$commit"
git push hub master && git push lab master