# Green Efficiency Analysis

## Measurement Methodology

This experiment measured the runtime of different programs to compare their efficiency. Execution time was recorded in seconds across multiple tests to see how consistently each program performed.

The first test measured a baseline loop running 100,000,000 iterations. Three tests were completed. The execution times recorded were 0.069506 seconds, 0.070180 seconds, and 0.073885 seconds.

The second test compared two algorithms that completed the same task. The naive algorithm and the single-pass algorithm were tested three times. The naive algorithm recorded times of 2.758083 seconds, 2.757644 seconds, and 2.748221 seconds. The single-pass algorithm recorded much lower times of 0.000106 seconds, 0.000111 seconds, and 0.000106 seconds.

The final test used an instrumented program to measure the time spent in different parts of the program. The total execution time was 0.000324 seconds. The measured times were 0.000146 seconds for BUILD_DATA, 0.000133 seconds for PROCESS, and 0.000044 seconds for REDUCE.

## Observed Performance Differences

The biggest difference was between the naive algorithm and the single-pass algorithm. The naive algorithm consistently took around 2.75 seconds, while the single-pass algorithm completed in around 0.0001 seconds.

For example, in TEST 1, the naive algorithm took 2.758083 seconds, while the single-pass algorithm took only 0.000106 seconds. Similar results appeared in TEST 2 and TEST 3.

The baseline loop tests were faster than the naive algorithm, with times between 0.069506 and 0.073885 seconds. This shows that the way an algorithm is designed can have a much larger effect on performance than simply running many operations.

## Relation Between Runtime and Energy Consumption

This experiment measured runtime, not direct energy usage. However, shorter runtime can reduce the amount of time the processor needs to perform calculations.

The single-pass algorithm used significantly less execution time than the naive algorithm. Since it completed the task faster, it may require fewer processor resources during execution.

The instrumented test also showed that different parts of a program can contribute different amounts of runtime. BUILD_DATA was the largest section at 0.000146 seconds, followed by PROCESS at 0.000133 seconds and REDUCE at 0.000044 seconds.

## Limitations of the Experiment

A limitation of this experiment is that it did not directly measure energy consumption. Runtime differences show performance changes, but they do not provide exact energy usage values.

Another limitation is that each test was only run three times. More tests could provide a larger set of results and improve confidence in the measurements.

## Practical Engineering Takeaway

The results show that choosing an efficient algorithm can greatly improve program performance. The single-pass algorithm completed the task much faster than the naive algorithm, with execution times close to 0.0001 seconds compared to around 2.75 seconds.

This shows that improving software design can reduce computation time without needing better hardware. Efficient algorithms can help create programs that use resources more effectively and improve overall system efficiency.
