# Command Injection CTF Challenge

## Overview

Welcome to the **Command Injection CTF Challenge**.

This lab is designed to teach one of the most common and dangerous web application vulnerabilities:

> **Never trust user input.**

The application accepts user input and passes it to a system command. Your objective is to understand how improper input validation can lead to unintended command execution and how developers can prevent these vulnerabilities.

---

## Learning Objectives

After completing this challenge, you should be able to:

- Understand how command injection occurs.
- Identify dangerous coding patterns.
- Test web applications safely.
- Recognize insecure uses of shell commands.
- Learn secure coding practices.
- Understand why user input should never be trusted.

---

## Scenario

A developer created a simple web application that executes a backend program.

The application accepts a value from the browser and passes it to a command executed on the operating system.

Your task is to inspect the application's behavior and determine whether the developer securely handled user input.

---

## Goal

Find the hidden flag.

The flag is stored somewhere on the server.

Can you discover it?
