#!/bin/bash

readme_file="README.md"

# Remove existing README.md file
if [ -e "$readme_file" ]; then
  rm "$readme_file"
fi

for folder in */; do
  folder_name=$(basename "$folder")
  file_name=$(find "$folder" -type f -printf "%f\n" -quit)

  if [[ -n "$file_name" ]]; then
    echo "- [$folder_name](./$folder)" >> "$readme_file"
  else
    echo "No file found in $folder_name"
  fi
done
