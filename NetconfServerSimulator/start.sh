#!/bin/bash
P=NetconfServerSimulator
N="$HOME/odl/SDN-Networksimulation/configKeller.json"
cd ..
sudo wtemulatorpoc5 --config=$N --topo=$P/topology.json --xml=yang/microwave-model-config.xml
