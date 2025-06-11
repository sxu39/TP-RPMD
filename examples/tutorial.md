# Tutorial for the `examples` Folder

This folder provides example cases for three simulation scenarios:
  - TP-Classical MD 
  - TP-PIMD 
  - TP-RPMD

Each folder contains:
- **Input files:** `in.lammps`
- **Force fields:** `compress_11.0.pb`
- **Starting structures:** `test.lmp`/`*.restart.*`



## Differences from Standard LAMMPS Input Files

### 1. Initial Structure File (`test.lmp`)
The file `test.lmp` is similar to a regular LAMMPS data file, but it requires additional information at the end:

```
Electron Number

   0.857753

dE/dN

   0.0
```

### 2. Simulation Types and Fix Commands

Each folder corresponds to a specific simulation method:

- **TP-classical MD**
    - Uses classical molecular dynamics under grand canonical ensemble:
      ```
      fix 1 all uvt temp ${TEMP} ${TEMP} ${TAU_T} mu ${mu} ${mu} ${TAU_mu}
      ```

- **TP-PIMD**
    - Uses Path Integral MD (nmpimd method) under grand canonical ensemble:
      ```
      fix 1 move pimd/langevin method nmpimd fmmode physical ensemble uvt integrator obabo thermostat NHC temp ${TEMP} Tdamp ${TAU_T} mu ${MU} Udamp ${TAU_U} tchain 5
      ```

- **TP-RPMD**
    - Provides an example for simulation restart using Ring Polymer MD (tprpmd method) under grand canonical ensemble. This folder contains files prepared for restarting from a previous run.
      ```
      fix 1 move pimd/langevin method tprpmd fmmode physical ensemble uvt integrator obabo thermostat NHC temp ${TEMP} Tdamp ${TAU_T} mu ${MU} Udamp ${TAU_U} tchain 5
      ```  


## Summary Table

| Method            | `fix` Command Used |
|-------------------|--------------------|
| TP-Classical MD   | `fix ... uvt ...`|
| TP-PIMD           | `fix ... pimd/langevin method nmpimd ...` |
| TP-RPMD           | `fix ... pimd/langevin method tprpmd ...` |



## Notes

- All examples require `deepmdnew` for `pair_style` and an input force field file (`compress_11.0.pb`).
- The initial structure file must include Electron Number and dE/dN at the end, as shown above.
- Specific simulation settings can be checked directly in each `in.lammps` and `test.lmp` file in the corresponding subfolder.
