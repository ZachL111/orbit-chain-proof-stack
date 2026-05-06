# Orbit Chain Proof Stack Walkthrough

This note is the quickest way to read the extra review model in `orbit-chain-proof-stack`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 97 | hold |
| stress | nonce pressure | 134 | watch |
| edge | settlement risk | 181 | ship |
| recovery | proof depth | 132 | watch |
| stale | event finality | 160 | ship |

Start with `edge` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

`edge` is the optimistic case; use it to make sure the scoring path still rewards strong signal.
