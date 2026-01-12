# Phasefront – Multi-AI Collaboration Starter Guide

This document is the **single source of truth** for collaborating with multiple AI assistants (ChatGPT, Gemini, Grok) on the Phasefront project.

---

## 1. Project Summary

**Project Name:** Phasefront
**Genre:** 5v5 Competitive Tactical FPS
**Engine:** Unreal Engine 5

**Core Hook:**
Players can switch between two overlapping dimensions ("Real" and "Phase") to gain tactical advantages. The mechanic must be readable, counterable, and competitive.

---

## 2. Core Design Pillars

* Competitive clarity over visual noise
* Skill-based gunplay
* Deterministic systems (minimal randomness)
* Multiplayer-first design
* Simple systems that compose well

---

## 3. Technical Architecture (High-Level)

* **Engine:** Unreal Engine 5
* **Languages:**

  * C++ for core gameplay systems
  * Blueprints for iteration, UI, and glue

### Core Systems

* Player Controller
* Weapon System
* Ability System (Phase)
* Dimension Layer Manager
* Multiplayer Replication Layer

---

## 4. Phase Mechanic Rules (Initial)

* Two dimensions exist simultaneously
* Player exists in exactly one dimension at a time
* Switching is cooldown-limited
* Enemies receive visual/audio cues when a switch occurs
* Phase state must replicate correctly

---

## 5. AI Collaboration Rules (MANDATORY)

These rules apply to **all AI assistants**.

1. No code without explanation
2. All assumptions must be stated
3. Multiplayer-safe by default
4. Prefer simple, debuggable solutions
5. Use TODO markers instead of guessing
6. No silent refactors
7. Output must be copy-paste runnable
8. Respect Unreal Engine best practices

---

## 6. AI Roles & Prompt Pack

### Shared Context (Give to ALL AIs)

```
You are collaborating on Phasefront, a 5v5 tactical FPS in Unreal Engine 5.
You must follow the rules in this document.
All output is intended for GitHub issues or pull requests.
```

### ChatGPT – Lead Systems Architect

**Focus:**

* System architecture
* UE5 best practices
* Multiplayer-safe gameplay code

**Output Format:**

1. Short explanation
2. Code (if applicable)
3. TODOs

### Gemini – Senior Technical Designer

**Focus:**

* Refactors and simplification
* Documentation improvements
* Edge-case reasoning

**Responsibilities:**

* Improve clarity
* Reduce complexity
* Validate assumptions

### Grok – Adversarial Reviewer

**Focus:**

* Find exploits
* Identify flaws
* Call out overengineering

**Mindset:**
Assume competitive players will abuse everything.

---

## 7. GitHub Workflow

### Repository Structure

```
Phasefront/
├── README.md
├── docs/
│   └── Phasefront_Multi-AI_Starter_Guide.md
├── Unreal/
├── prototypes/
└── tests/
```

### Issue Workflow

1. Create a GitHub Issue with:

   * Goal
   * Constraints
   * Expected output

2. Ask **ChatGPT** to design the system

3. Paste into GitHub Issue

4. Ask **Gemini** to refactor/clarify

5. Ask **Grok** to attack the design

6. Merge the best ideas into one solution

---

## 8. Active Starter Tasks

* Player movement prototype
* Phase dimension switch prototype
* Weapon firing baseline
* Replication test harness

---

## 9. Decision Logging

All major decisions must be logged in a `DECISIONS.md` file:

```
Date | Decision | Reason | Consequence
```

---

## 10. Definition of Done

A task is done when:

* It works in multiplayer
* It is documented
* It has been reviewed by at least one other AI
* It is understandable by a human after 3 months

---

End of document.
