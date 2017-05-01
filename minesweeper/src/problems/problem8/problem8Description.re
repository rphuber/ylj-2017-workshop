let src = {|
# Problem 8 - Can you take me higher?

## Requirements
* pass a react component into another as a prop, render both

## Relevant Koans

## Instructions

A more relaxing problem after that last one. This problem will teach you the syntax to pass React components as props. In the React library, we can pass constructors around willy-nilly, but not so in ReasonML. To pass a component as a prop in react we have to pass a function containing that component. This is a side effect of the way the JSX ppx operates.

```reason
/* no good */
let logProps Component => {
  fun props => {
    Js.log props;
    <Component />;
  };
};

/* correct way */
let logProps componentFunction => {
  let props => {
    Js.log props;
    componentFunction props;
  };
};

/* where componentFunction is defined at */
let componentFunction props => <Component prop1=props.prop1 props2... />
```
|};
