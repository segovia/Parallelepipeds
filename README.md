Parallelepipeds
===============

A repository for the project of the Design of Parallel and High-Performance Computing course.

The goal is to implement a concurrent version of the connected components algorithm applied to various random graphs. The performance of the developed algorithms is then tested amd compared against the sequential version of the same problem.
We develop two seperate approaches for the frameworks OpenMP and MPI.


Week 1
======

- All: Implement a sequential solution for the problem (put it into 0_sequential/name/)
- Gustavo: find a concept for random graph generation (and implement it?)
- Seraiah: find a concept for the distributed OpenMP solution  (and implement it?)
- Fabian: find a concept for the distributed MPI solution  (and implement it?)

Week 2
======

- Presentation

Week 6
======

- Reach ballmer's peak

Week t-2
========

- pboost implementation -done
- pbfs check why it's slow -done
- get xeon phi working -almost done (need argument supply method)
- generate test suite - different sized graphs with different amounts of edges (sparse/non-sparse)
- generate graph files for real world graphs

Week t-1
========

- get xeon phi working with arguments
- generate test suite - different sized graphs with different amounts of edges (sparse/non-sparse)
- generate graph files for real world graphs
- presentation:

	- graph: comparison parallel algorithms (RT / Graph size (1: same # components, increasing # v+e) (2: same # v, increasing # components) )
	- discuss algos:
		- pbfs
			- explain serial + parallel
			- differences to atomics
			- main/merge timings
			- graph: ideal number of cores (RT / # threads)
		- pstree
			- explain serial + parallel
			- graph: ideal number of cores (RT / # threads)
		- random contract
			- explain serial + parallel
			- graph: ideal number of cores (RT / # threads)
	- real world examples with different algorithms: graphs (RT / Graph)
	











