# Review Journal

The review surface for `orbit-chain-proof-stack` is deliberately narrow: one fixture, one scoring rule, and one local check.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 97, lane `hold`
- `stress`: `nonce pressure`, score 134, lane `watch`
- `edge`: `settlement risk`, score 181, lane `ship`
- `recovery`: `proof depth`, score 132, lane `watch`
- `stale`: `event finality`, score 160, lane `ship`

## Note

The repository should be understandable without pretending it is larger than it is.
