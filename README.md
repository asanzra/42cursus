# 42cursus - A collection of my 42 School projects

This repository contains all the course projects ordered by date of completion. Only the publicly shareable code is included.

## Cloning this repository with its submodules

To clone the repo and automatically initialize and update all submodules, run:
```bash
git clone --recurse-submodules git@github.com:asanzra/42cursus.git
cd 42cursus
```

If you have already cloned without `--recurse-submodules`, you can initialize and fetch submodules with:
```bash
git submodule init
git submodule update
```

## Repository structure

```
42cursus/
├─ 00_project-A/    # Submodule for Project A
├─ 01_project-B/    # Submodule for Project B
...
└─ README.md     # This file
```

## Keeping submodules up to date

To pull the latest changes for each submodule, run:
```bash
git submodule update --remote
```  
Then commit and push the updated submodule pointers in the main repo:
```bash
git add .
git commit -m "Update submodule pointers"
git push
```