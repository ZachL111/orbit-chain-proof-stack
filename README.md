# orbit-chain-proof-stack

`orbit-chain-proof-stack` explores blockchain tooling with a small C codebase and local fixtures. The technical goal is to implement a C blockchain tooling project for proof policy evaluation, using deny and allow fixtures and explainable decision traces.

## Reason For The Project

I want this repository to be useful as a quick reading exercise: fixtures first, implementation second, verifier last.

## Orbit Chain Proof Stack Review Notes

Start with `settlement risk` and `event finality`. Those cases create the widest score spread in this repo, so they are the best quick check when the model changes.

## What It Does

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/orbit-chain-proof-walkthrough.md` walks through the case spread.
- The C code includes a review path for `settlement risk` and `event finality`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## How It Is Put Together

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The C implementation avoids hidden state so fixture changes are easy to reason about.

## Run It

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Check It

The same command runs the local verification path. The highest-scoring domain case is `edge` at 181, which lands in `ship`. The most cautious case is `baseline` at 97, which lands in `hold`.

## Boundaries

The fixture set is small enough to audit by hand. The next useful expansion is malformed input coverage, not extra surface area.
