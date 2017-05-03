# Yow Lambda Jam 2017 - ReasonML Workshop

## If you are on windows, or any non-mainstream linux / OSX, please download virtualbox and set it up before arriving. I will provide a vbox image with the latest version of this repo set up, and with some text editors set up inside it for the day.

## This is still being amended. Please check back here on 7th May for the final version. Make sure to pull the latest version before the workshop on the 9th.

This workshop runs through two projects, koans and minesweeper. The first project is a koans folder with a number of TDD tasks to introduce the language elements and features. The second task is a step by step introduction to applying the language to building the game Minesweeper.

Each of these projects is self-documenting. You should start in the koans project, and follow the instructions there. Once that project is completed, or you feel comfortable going ahead, you should begin in the minesweeper project.

Please make sure you have cloned this repository and run all the installation instructions before coming to the workshop on the 9th. If any instructions are unclear, or if you're having trouble getting set up, please email me at bassjacob@gmail.com or tweet me at [@bassjacob](https://twitter.com/bassjacob) and I'll make sure to help you.

Windows support is fairly spotty at present. I'll make sure to have a virtualbox machine set up and available here the weekend before the conference, so please check back here if you have difficulty with any of these steps.

## Requirements

*   NodeJS >= v6.6.0 and npm >= 3 [Installation Instructions](https://nodejs.org/en/download)
*   Install refmt, ocamlmerlin and ocamlmerlin-reason according to [reasonml js workflow](https://facebook.github.io/reason/jsWorkflow.html#javascript-workflow-editor-setup-global-utilities)
*   Please follow the [reasonml tooling instructions](https://facebook.github.io/reason/tools.html#editor-integration) to set up your text editor. At time of writing this, the following editors are supported:
    *   vim / neovim
    *   emacs
    *   atom
    *   vscode

## Installation Instructions

```bash
# Install and set up the requirements above

# Clone this repository

git clone https://github.com/bassjacob/ylj-2017-workshop.git

# Change directory into the cloned folder

cd ylj-2017-Workshop

# Install the project dependencies

npm i
```

## Getting Started

### Before attending the workshop!!!

Once you have the repository cloned and the dependencies installed, please run the following command to test the installation. From inside the root of the repository (the folder you just cloned into) run the following command:

```
npm run koans
```

You should see a lot of output on your terminal that looks like this:

```bash
>>>> Finish compiling
watching dir src now
watching dir src/koans now
[nodemon] 1.11.0
[nodemon] to restart at any time, enter `rs`
[nodemon] watching: /home/j/dev/talks/ylj-2017-reason/a/koans/lib/js/**/*
[nodemon] starting `mocha -b --growl koans/lib/js/src/koans.js`


  ReasonML bucklescript Koans
    Expects
      1) Mocha.ok expects a true value


  0 passing (9ms)
  1 failing

  1) ReasonML bucklescript Koans Expects Mocha.ok expects a true value:
     Error: the array [
  [
    "Sys_error"
    -1
  ]
  "error"
] was thrown, throw an Error :)

[nodemon] app crashed - waiting for file changes before starting...
```

If you see anything different, or the command fails for any reason, please take a screenshot and contact me.

## Contact Me

Email: mailto:bassjacob@gmail.com

Twitter: [@bassjacob](https://twitter.com/bassjacob)

[Join the ReasonML Discord channel](https://discord.gg/U8zfzKF)
