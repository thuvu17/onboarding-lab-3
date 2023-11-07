# Week 3 Lab: Verification

## What testing strategy did you adopt for this Exercise2? What decisions did you have to make and how did you come up with your answers?
I wasn't sure how many test cases should I rest for so I run LFSR for multiple cycles with 1 random test input. Since it's LFSR, if it's correct for one seed, we probably won't have to test for others.

## How does testing a Don’t Care work? What must be done to ensure the input truly has no effect on output?
Testing a Don't Care means verifying that certain inputs do not affect the output. So I tested with every possible values 0-3  to make sure that the output isn't affected by input test values.
