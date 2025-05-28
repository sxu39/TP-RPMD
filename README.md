# Repository Overview

This repository contains modified source codes and practical examples for MD accounting for NQEs under a grand canonical constant potential condition. It is organized into three main folders:

## Directory Structure

### 1. `deepmd-kit/source`

- Contains the source code of [DeePMD-kit](./deepmd-kit/source/) with custom modifications.

### 2. `lammps-stable_2Aug2023_update2/src`

- Holds the modified source code of [LAMMPS](./lammps-stable_2Aug2023_update2/src/) (based on the stable version from 2 Aug 2023 plus updates).

### 3. `examples`

- Provides working [examples](./examples/) for different types of simulations, including input files, force fields, and starting structures. Refer to [tutorial.md](./examples/tutorial.md) for more information.
- Currently, three types of simulations are included:
  - TP-Classical MD 
  - TP-PIMD 
  - TP-RPMD