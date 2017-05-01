let src = {|
# Problem 1 - Making Things Appear

## Requirements
* Make the text "ReasonML" appear in the pane to the right

## Relevant Koans
* koan13_Strings

## Instructions

Welcome to the ReasonML Minesweeper workshop. This screen displays the workshop. As you complete a problem in the workshop, you can click the following link in the navigation on the left. This pane will give you the instructions on how to complete the problem. As you update the solution file, it will be rendered in the pane to the right.

Let's begin by getting some text to render on the screen. Open the file: minesweeper/src/problem1/problem1.re and edit the file so that the render method returns some JSX that will print "ReasonML". Bear in mind that you can't embed a string inside reason's JSX, and must instead make a call to ReactRe.stringToElement like below:

```reason
ReactRe.stringToElement "a string to render"
```
|};
